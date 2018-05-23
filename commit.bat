@ECHO OFF
git add *
SET /P mssg=Please enter your commit message: 
git commit -m "%mssg%"
git push
git status
