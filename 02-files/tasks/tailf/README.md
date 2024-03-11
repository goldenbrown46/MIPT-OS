# tailf

Одна из самых частых команд, используемая при чтении логов – это `tail -f`. Она позволяет посмотреть в реальном времени, что пишут другие процесс в указанный файл. В этой задаче нужно будет реализовать аналог `tail -f`.

Решение нужно оформить в виде самостоятельной программы, которая принимает один аргумент командной строки – имя файла, за которым нужно следить. При старте программы нужно вывести в stdout всё, что уже записано в заданном файле. Как только в файле какой-то другой процесс записал произвольный кусок данных, нужно вывести в stdout этот кусок без изменений.