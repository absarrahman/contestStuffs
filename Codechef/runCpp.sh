#Before running the script just use this command  chmod u+x runCpp.sh
echo Enter Filename
read filename
g++ $filename.cpp -o $filename
./$filename
exit 0