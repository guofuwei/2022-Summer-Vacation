FROM ubuntu:20.04
LABEL maintainer="2625406970@qq.com"
ENV REFRESHED_AT 2022-08-08

RUN apt-get -qq update && apt-get -qq install ruby ruby-dev build-essential redis-tools
RUN gem install -N sinatra json redis

RUN mkdir -p /opt/webapp

EXPOSE 4567

CMD [ "/opt/webapp/bin/webapp" ]
