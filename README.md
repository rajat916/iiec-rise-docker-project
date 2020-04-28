# Small C Test
## Description
This image contains smaller c-programs, which can be executed.<br>
It was created to learn the general commands of Docker and to examine,<br>
how to use C inside Docker wihtout needing the complete gcc image.


## Installation
You can get the image via Docker Hub. Simply run

```docker pull floriandahlitz/small_c_test```

## Available Commands
The following command will run a comparison between two sorting algorithms:

```docker run --rm floriandahlitz/small_c_test --comparison```

To use the case-changer run the following command with a string argument:

```docker run --rm floriandahlitz/small_c_test --case-changer "Test String"```

If you run the image without any further argument, it will execute the default hello-program written in C.
