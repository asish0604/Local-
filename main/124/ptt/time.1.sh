#!/bin/bash
echo "IST: $(TZ="Asia/Kolkata" date)"
echo "GMT: d$(TZ="GMT" date)"
echo "UTC: $(TZ="UTC" date)"
echo "ET: $(TZ="America/New_york" date)"
