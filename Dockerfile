FROM ubuntu:20.04

# 비대화식 환경 설정
ENV DEBIAN_FRONTEND=noninteractive

# 필수 패키지 설치
RUN apt-get update && apt-get install -y \
    build-essential \
    && apt-get clean

# 작업 디렉토리 설정
WORKDIR /app

# 소스 코드 복사
COPY . .

# Makefile 빌드 및 실행
RUN make

CMD ["./student_app"]
