CLASS=${1:-HelloWorld}
shift

javac $CLASS.java
java -ea $CLASS $@
#-ea for enable assertions
