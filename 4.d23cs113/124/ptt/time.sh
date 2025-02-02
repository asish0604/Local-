#!/bin/bash
echo "current time in IST: $(TZ='Asia/india' date +"%T")"
echo "current time in GMT: $(TZ='GMT' date +"%T")"
echo "current time in UTC: $(TZ='UTC' date +"%T")"
