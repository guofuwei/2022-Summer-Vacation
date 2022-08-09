FROM ubuntu:20.04
MAINTAINER hanshan0808 "2625406970@qq.com"
ENV REFRESHED_AT 2022-08-08
EXPOSE 6379
RUN apt-get -yyq update && apt-get -yqq install redis-server
ENTRYPOINT ["/usr/bin/redis-server"]
CMD []
