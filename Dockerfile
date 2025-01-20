FROM ssoonan0770/eos-base

COPY wrk/* ./  
RUN make

ENTRYPOINT [ "./main" ]