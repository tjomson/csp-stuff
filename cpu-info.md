# CPU info

## lstopo

Visualizes cpu with block diagram.

`lstopo --output-format png output.png`

## lscpu

Hardware specs of the cpu

`lscpu`

## Memory info

Memory info with `lsmem`

More info with

`sudo lshw -C memory`

## htop

Show core utilization and active processes

`htop`

`q` to exit again

## monitor core frequency

`watch -n 1 'cat /proc/cpuinfo | grep "MHz"'`
