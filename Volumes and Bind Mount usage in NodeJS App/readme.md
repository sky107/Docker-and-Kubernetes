
This is a simple feedback input NodeJS App 
-------------------------------------------------------------------------------------------------------------------------------------------------------
 
Flow: index.html contains two fields Feedback title {file title} and Feedback description {file content} -> txt file gets created in temp folder-> if feedback folder does not have that file copy  it inside feedback folder and erase from temp else throuw already exist! and then erase from temp folder.

Basic Aim and Idea:

we want to persist the data when the Docker container get destroyed (For Ex: if we create a project to store credential it should persist) so we use the concept of volumes and bindmounts. and that data should be able to retrieve once new container based on former image is created

Volumes: Anonymous (for storing temp data) and named volumes (to persist the data after container gets destroyed)

In this project we used bindmount for live editing  on html pages & other files on local machine folder. for server.js we need nodemon dependencies to detect and automatice restart the server but I have not used due to lack of need


1 named Volume for feedback folder , 1 annonymous volume for node_module dependences as we are usingn node on conatiner not on local machine and 1 bind mount for user folder on local machine for live editing changes in non-javascript files.


---------------------------------------------------------------------------------------------------------------------------------------------------------------------
Image Building: | http://res.cloudinary.com/df2q7cryi/image/upload/7b1a440eff92e48baf67296da4a1e0cc1607397192.png

Feedback Form | http://res.cloudinary.com/df2q7cryi/image/upload/4709840f6288ec15f8040221f06cae041607397221.png

Dockerizing 2times| http://res.cloudinary.com/df2q7cryi/image/upload/fd57b271b49b711533c3c84999ab33821607397160.png

Data persistance check | http://res.cloudinary.com/df2q7cryi/image/upload/752a443676ae2fd362a2a013e4833fcf1607397271.png            


http://res.cloudinary.com/df2q7cryi/image/upload/71c1f1ac54ede7e0f15aee1c4694bbeb1607397301.png
















