FROM node
# pull the prebuilt image FROM DOCKER HUB
WORKDIR /app
COPY . /app
# first dot indicates path in your machine and other dot inside image location
# As workdir /app we can use two dot as well insted 
# here we are using /app
RUN npm install
# if you will exwcute npm install it will install to root but we want to install inside app folder 
# RUN node server.js we are tyring to run code insdde image bad 

EXPOSE 80

CMD ["node","server.js"]
