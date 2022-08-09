FROM python
RUN mkdir /code
WORKDIR /code
COPY ./requirements.txt .
RUN /usr/local/bin/python -m pip install --upgrade pip -i https://mirrors.aliyun.com/pypi/simple/;\
	pip install -r requirements.txt -i https://mirrors.aliyun.com/pypi/simple/;
COPY . /code/
