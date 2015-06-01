Repositories
============

Select Repositories
---------------------

Update the Qompoter.ini file in you $HOME folder: ~/.config/qompoter/Qompoter.ini

	[Query]
	repositories=Path to repository A|Path to repostory B|...

Repository Structure
---------------------

A package is identified by its vendor name, its project name, and by a version number. E.g. fylhan/qompoter/v1.0.0.
A package can be installed as a library (if a compiled version is available), or as source files.

The example below shows the folder structure of a repository containing 3 different projects:

* Project A: raw source files are provided, versions are available through different folders
* Project B : raw source files are available, and also a pre-compiled library for Linux 32/64 bits or Windows
* Project C : source files are available through a Git repository (using tag for versionning), and also a pre-compiled library for Linux 32/64 bits or Windows

	vendor_1
		project_A
			v0.9.0
				files...
				qompoter.pri
			v1.0.0
				files...
				qompoter.pri
			v1.0.0-featureX
				files...
				qompoter.pri
		project_B
			v1.1.0
				files...
				qompoter.pri
				bin
					include
						header files...
					lib_linux_32
						.a, .so, ...
					lib_linux_64
						.a, .so, ...
					lib_windows
						.a, .dll, ...
					qompoter.pri
	vendor_2
		project_C
			v1.0.0
				bin
					include
						header files...
					lib_linux_32
						.a, .so, ...
					lib_linux_64
						.a, .so, ...
					lib_windows
						.a, .dll, ...
					qompoter.pri
			project_C.git
