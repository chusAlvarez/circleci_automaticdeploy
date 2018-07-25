FROM chusalvarez/spotathome
RUN apt-get -y install curl net-tools
USER dev
WORKDIR /home/dev
COPY . myprueba
USER root
RUN chown -R dev:dev myprueba
USER dev
WORKDIR /home/dev/myprueba
RUN chmod +x launcher.sh
RUN make all
ENV LD_LIBRARY_PATH /usr/local/lib
EXPOSE 3000
CMD ["/home/dev/myprueba/launcher.sh"]
