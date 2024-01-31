# Crontab

Add to crontab

`crontab -e`

To make a job that runs every 5 min, insert

`*/5 * * * * echo "test" >> test.txt`

Default folder is `~`

To list jobs

`crontab -l`

To delete all jobs

`crontab -r`
