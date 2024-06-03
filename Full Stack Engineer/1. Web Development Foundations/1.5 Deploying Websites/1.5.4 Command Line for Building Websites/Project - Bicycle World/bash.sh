# Print the working directory.
#If you ever get lost, you can return to this directory using cd.

$ pwd
/home/ccuser/workspace/bicycle-world-ii

# List the files and directories in the working directory.
$ ls
brands.txt  freight  mountain  racing

# Change directories to the freight/ directory.
$ cd freight

# List the files and directories in the working directory.
$ ls
messenger  porteur

# Change directories to the porteur/ directory.
$ cd porteur
$ ls

# Change directories up two levels to the bicycle-world-ii/ directory.
#List the files and directories in the bicycle-world-ii/ directory.
$ cd ../..
$ pwd
/home/ccuser/workspace/bicycle-world-ii

$ ls */**
freight/messenger:

freight/porteur:

mountain/downhill:
heavyweight  lightweight

mountain/hardtail:

racing/road:

racing/track:

# Change directories to the mountain/downhill/ directory.
$ cd mountain/downhill

# Make a file called dirt.txt.
$ touch dirt.txt

# Make a file called mud.txt.
$ touch mud.txt

# List the files and directories in the downhill/ directory.
$ ls
dirt.txt  heavyweight  lightweight  mud.txt

# Downhill biking is dangerous: In the downhill/ directory, make a directory called safety/.
$ mkdir safety

#Change directories to the bicycle-world-ii/ directory.
$ cd ../..
$ ls
brands.txt  freight  mountain  racing

$ pwd
/home/ccuser/workspace/bicycle-world-ii

# List the contents of the bicycle-world-ii/ directory.
$ ls
brands.txt  freight  mountain  racing

#The shop is adding a new type of bike!
# In bicycle-world-ii/, make a directory called bmx/.
$ mkdir bmx

# Without changing directories from bicycle-world-ii/, make a file in the bmx/ directory called tricks.txt.
$ touch bmx/tricks.txt

# List all files and directories in the current directory.
$ ls
bmx  brands.txt  freight  mountain  racing

$ ls */**
bmx/tricks.txt

freight/messenger:

freight/porteur:

mountain/downhill:
dirt.txt  heavyweight  lightweight  mud.txt  safety

mountain/hardtail:

racing/road:

racing/track:
$ 