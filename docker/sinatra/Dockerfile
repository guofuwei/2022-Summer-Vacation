FROM ubuntu:20.04
MAINTAINER hanshan0808 "2625406970@qq.com"
ENV REFRESHED_AT 2022-08-07
RUN cp /etc/apt/sources.list /etc/apt/sources.list_bak
COPY sources.list /etc/apt/sources.list
RUN apt-get update; \
	apt-get install -y ruby ruby-dev build-essential redis-tools; \
	gem install --no-document sinatra json redis; \
	mkdir -p /opt/webapp;
EXPOSE 4567
CMD ["/opt/webapp/bin/webapp"]



