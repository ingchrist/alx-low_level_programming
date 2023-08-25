#!/bin/bash

# Get the commit message from the user
read -p "Enter a commit message: " commit_message

# Add all the files in the current directory to the staging area
git add .

# Commit the changes to the local repository
git commit -m "$commit_message"

# Push the changes to the remote repository
git push origin master
