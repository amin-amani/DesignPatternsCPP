download code mate from  `https://github.com/adamtornhill/code-maat` 

download scripts:
```
https://github.com/adamtornhill/maat-scripts.git
```
# clone test brepository and limit analys date
```
git clone https://github.com/hibernate/hibernate-orm.git
git checkout $(git rev-list -n 1 --before="2013-09-05" main)

```
# Generate a Version-Control Log 
```
git log --pretty=format:'[%h] %an %ad %s' --date=short \
--numstat --before=2013-09-05 --after=2012-01-01 > hib_evo.log
```
```
maat -l hib_evo.log -c git -a revisions > maat_freqs.csv
cloc ./ --by-file --csv --quiet --report-file=maat_lines.csv
python3 ../maat-scripts/transform/csv_as_enclosure_json.py --structure ./maat_lines.csv --weights maat_fre
qs.csv > output.csv

```


 python3 -m http.server 8888
