#!/bin/bash
currentTime(){
IST="Asia/Kolkata"
GMT="GMT"
UTC="UTC"
ET="US/Eastern"

#Print current time in each timezone
echo "IST(Indian Standard Time):$(TZ=$IST date '+%Y-%m-%d%H:%M:%S')"
echo "GMT(Greenwich Mean Time):$(TZ=$GMT date '+%Y-%m-%d%H:%M:%S')"
echo "UTC(Coordinated Universal Time):$(TZ=$UTC date '+%Y-%m-%d%H:%M:%S')"
echo "ET(Eastern Time):$(TZ=$ET date '+%Y-%m-%d%H:%M:%S')"
}
currentTime

