# Print the working directory.
$ pwd
/home/ccuser/workspace/daily-buzz

# List all files and directories in the current working directory
$ ls
culture  health  national  technology

# With one command, change directories to the national/politics/ directory.
$ cd national/politics

# List all files and directories in the working politics/ directory.
$ ls
policy

# In the politics/ directory, create a directory called elections/.
$ mkdir elections

# Change directories into the elections/ directory.
$ cd elections

# In the elections/ directory, make two files candidates.txt and issues.txt
$ touch candidates.txt issues.txt

# Change directories three levels up to the daily-buzz/ directory, and print the working directory.
$ pwd
/home/ccuser/workspace/daily-buzz/national/politics/elections

# In the daily-buzz/ directory, make a directory called business/ and change directories into the business/ directory.
$ cd ../../..
$ pwd
/home/ccuser/workspace/daily-buzz
$ mkdir business
$ cd business

# List all files and directories in the business/ directory.
$ ls

# From the business/ directory, make a directory called startups/ and change directories into the startups/ directory.
$ mkdir startups
$ cd startups

# Change directories one level up back to the business/ directory.
# From the business/ directory, make a directory that is a child of startups/, called disruptors/.
$ cd ..
$ mkdir startups/disruptors

# From the business/ directory, make three files in the disruptors/ directory. The files should be called tech.txt design.txt and education.txt.
$ touch startups/disruptors/tech.txt
$ touch startups/disruptors/design.txt
$ touch startups/disruptors/education.txt

# Change directories one level up to the daily-buzz/ directory and print the working directory.
$ cd ..
$ pwd
/home/ccuser/workspace/daily-buzz
$ 