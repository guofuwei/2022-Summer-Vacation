FROM ubuntu:20.04
MAINTAINER hanshan0808 "2625406970@qq.com"
ENV REFRESHED_AT 2022-08-07
# 换国内镜像
RUN cp /etc/apt/sources.list /etc/apt/sources.list.bak;
COPY sources.list /etc/apt/sources.list
RUN  apt-get update; \
	 apt-get -y install nginx;
RUN mkdir /var/www/html/website
COPY nginx/global.conf /etc/nginx/conf.d/
COPY nginx/nginx.conf /etc/nginx/nginx.conf
EXPOSE 80

