# Flame graphs

Make sure you have perl installed.

## Recording events

`perf record -F 1000 -a -g -- ./myCoolProgram.exe arg1 arg2`

`-a` to record all cpu cores, otherwise use `-C 0,1,2` with the cpu id's to capture. `-F` to define sampling rate. `-g` to record call graph. Use `-p 123` to specify a process id to capture.

`perf script > out.perf`

## Displaying chart

The tool requires a specific format, so run

`./stackcollapse-perf.pl out.perf > out.folded`

Now generate svg

`./flamegraph.pl out.folded > cool-graph.svg`