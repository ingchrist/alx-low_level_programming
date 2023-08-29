#!/bin/bash

# Get the current working directory
current_dir=$(pwd)

# Get the name of the current branch
branch_name=$(git branch | grep \* | cut -d ' ' -f 2)

# Get the commit message
commit_message="Automatic commit"

# Add all changed files
git add .

# Commit the changes
git commit -m "$commit_message"

# Push the changes to the remote repository
git push origin "$branch_name"

