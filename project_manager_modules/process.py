import subprocess
import os

#Run a system command on a specific directory
#[NOTE] Works only with OSes that use 'cd' to change directory

def _run_command_in_directory(command= "", directory = ""):
    full_command = f"cd {directory} && {command}"
    print(full_command)
    subprocess.run(full_command, shell=True)

#Create a directory
def create_sub_dir(dir = ""):
    os.makedirs(dir, exist_ok=True)
    
#Clone a github repository 'repo' on specific 'directory' 
def clone_github_repo(directory= "",repo = ""):
    _run_command_in_directory("git clone " + repo,directory)

#Configure project using cmake
def cmake_configure(build_dir = "",src_dir = ""):
    create_sub_dir(build_dir)
    _run_command_in_directory("cmake " + src_dir,build_dir) 

#Build project using cmake
def cmake_build(build_dir,configuration):
    _run_command_in_directory("cmake --build . --config " + configuration,build_dir)

#Clear console terminal
def clear_console():
    print("\033c")