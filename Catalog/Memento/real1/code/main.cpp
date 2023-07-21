#include <iostream>
#include <vector>

class Memento {
public:
    ~Memento(){}
    virtual std::string state() const = 0;

};

class ConcreteMemento : public Memento {
    std::string _state;

public:
    ConcreteMemento(std::string state) : _state(state) {}

    std::string state() const override {
        return _state;
    }
    ~ConcreteMemento(){}
};

class TextEditor {
    std::string _currentText = "";

public:
    void AppendText(std::string text) {
        _currentText += text;
    }

    void Print() {
        std::cout << _currentText << std::endl;
    }

    void Clear() {
        _currentText = "";
    }

    Memento* Save() {
        return new ConcreteMemento(_currentText);
    }

    void Restore(Memento* state) {
        _currentText = state->state();
    }
};

class Logger {
    std::vector<Memento*> _mementos;
    TextEditor* _editor;

public:
    Logger(TextEditor* editor) : _editor(editor) {}

    void Backup() {
        _mementos.push_back(_editor->Save());
    }

    void Undo() {
        if (!_mementos.empty()) {
            Memento* memento = _mementos.back();
            _mementos.pop_back();
            _editor->Restore(memento);
            delete memento;
        }
    }
};

int main() {
    TextEditor editor;
    Logger logger(&editor);

    editor.AppendText("hello");
    logger.Backup();

    editor.AppendText(" Dear amin");
    logger.Backup();

    editor.AppendText(" this a test");


    editor.Print();
    logger.Undo();
    editor.Print();
    logger.Undo();
    editor.Print();

    return 0;
}
