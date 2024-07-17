from project_manager_modules import process

_deps_src_dir = '../deps_src' #directory for clonning source code of dependencies
_deps_build_dir = '../deps_build' #directory for building dependencies
_proj_build_dir = '../proj_build' #directory for building projects
_from_proj_build_to_proj_src = "../../MinimalGameEngine" #path to go prom project build directory to project source directory
_from_deps_builds_deps_src = "../../deps_src"

# Method for setting up GLFW as dependency
def glfw_setup():
    
    _glfw_repo_address = 'https://github.com/graviolagames/glfw.git'
    _glfw_src_subdir = '/glfw'
    _glfw_build_subdir = '/glfw'

    
    # Clone source code for dependencies
    process.clone_github_repo(_deps_src_dir,_glfw_repo_address)
    
    # Configure dependency projects
    process.cmake_configure(_deps_build_dir + _glfw_build_subdir, _from_deps_builds_deps_src + _glfw_src_subdir)

    # Build dependencies
    process.cmake_build(_deps_build_dir + _glfw_build_subdir,'Release')
    process.cmake_build(_deps_build_dir + _glfw_build_subdir,'Debug')

# Set up all dependencies
def dependencies_setup():
    process.create_sub_dir(_deps_src_dir)
    process.create_sub_dir(_deps_build_dir)
    glfw_setup()

# Build a project, guiven its build path and source path
def build_project(build_path,src_path):
    
    #Create sub directory for building
    process.create_sub_dir(build_path)
    
    #configure project
    process.cmake_configure(build_path,src_path)
    
    #build project
    process.cmake_build(build_path,'Debug')
    process.cmake_build(build_path,'Release')

# Set up a project ghiven its directory
# 
def setup_project(dir):
    print("Building "+ dir)
    build_project(_proj_build_dir + dir, _from_proj_build_to_proj_src + dir)

def main():
    while True:
        print("\nChoose an action:")
        print("d) (First) Download and build dependencies.")
        print("........Configure and build........")
        print("1) Game")
        print("c) Clear the console")
        print("q) quit")
        
        choice = input("Choose an option: ")

        if choice == "d":
            dependencies_setup()
        elif choice == "1":
            setup_project("/Game")
        elif choice == "c":
            process.clear_console()
        elif choice == "q":
            print("Bye!")
            break
        else:
            print("Invalid option, try again.")

if __name__ == "__main__":
    main()
