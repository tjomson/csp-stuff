# Multiplexers

## tmux

`tmux new-session <name>` to create session.

`tmux kill-session -t <name>` to kill it.

`tmux attach-session -t <name>` to attach to existing.

`tmux list-sessions` to list.

When inside a session click `ctrl`+`b` and then `d` to exit a session, `c` to clear.

## screen

`screen -S <name>` to start a new session.

`screen -X -S <name> quit` to kill it. -X means execute in the session, -S names the session.

`killall screen` to kill all.

`screen -r <name>` to reattach.

When inside a session click `ctrl`+`a` and then `d` to exit.