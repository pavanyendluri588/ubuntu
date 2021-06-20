echo  "executing git add . command "
sudo git add .
echo  "git add command is successfully executed"
echo  "==================================================================================================="
echo  "checking ststus.....   by using  git status command"
sudo git status
echo  "git status command is successfully executed"
echo  "==================================================================================================="
echo  "creating upload"
sudo git  commit  -m  "20/6/2021 upload"
echo   "upload is successfully created"
echo  "===================================================================================================="
echo  "uploading into github"
sudo git push origin master
echo  "#####################################################################################################"
echo  "pushing is completed"
