Qompoter
================================

An attempt of dependency manager for Qt / C++, because I am sick of managing each C++ piece of code separately!


[![Build Status](https://travis-ci.org/Fylhan/qompoter.svg?branch=qompoter-bash)](https://travis-ci.org/Fylhan/qompoter)

The current version is still a work in progress, a lot have to be done to make it really usable. Still, you can:

* describe your dependencies in a "qomposer.json" file
* search and retrieve all dependencies (also recursively for sub-dependencies) from a Git repository or a structured file system
* generate qompote.pri and vendor.pri files to be included and used in your .pro file for Qt

Requirements
--------------------------------

* Bash
* Git, sed, zip

Works on Linux and Windows (Git bash). It should also work on Mac or Windows (Cygwin or Mysys command line) but I did not test it yet.

Installation
--------------------------------

Dowload Qompoter and make the script file runnable, and move it to a place accessible in the `PATH`:

	wget https://raw.githubusercontent.com/Fylhan/qompoter/f5ede63cb54586fc0388a95da3c7cab7ee559f1f/qompoter.sh -O qompoter.sh
	chmod u+x qompoter.sh
	mv qompoter.sh /usr/bin/qompoter

Usage
--------------------------------

In your project, create a qompoter.json file:

	{
		"name": "fylhan/hope",
		"description": "Three things remains: faith, hope and love.",
		"keywords": ["Qt", "C++"],
		"authors": [
			{
				"name": "Fylhan",
				"homepage": "fylhan.la-bnbox.fr"
			}
		],
		"require": {
			"fylhan/platphorm": "dev-master",
			"fylhan/posibrain": "v0.*"
		},
		"require-dev": {
			"cp/fylhan": "v1.0"
		},
		"repositories": {
			"fylhan/platphorm" : "https://github.com",
			"fylhan/posibrain" : "https://github.com"
		}
	}

Then, download and install dependencies listed in your `qompoter.json` using:

	qompoter install

*For more information about the command line options, use `qompoter --help`.*

That's it! You can now include `vendor.pri` in the `.pro` file of your project, and include the dependencies that you required:

	CONFIG += platphorm posibrain fylhan
	include(vendor/vendor.pri)

Documentation
--------------------------------

* [Concept of packages](docs/Packages.md)
* [How to create a Qompoter file?](docs/Qompoter-file.md)
* [How to create a Qompoter repository?](docs/Repositories.md)
* [Command line interface](docs/Command-line.md)

Releases
--------------------------------
Qompoter is released under 2 versions:

* The current version is a proof-of-concept called "qompoter-bash", a simple Bash implementation fitted for basic usage. Useful to kickoff the project without involving big development, this version targets basic usage and its development may end once a stable enough version is released.
* The main "qompoter" version is a more complete implementation in C++/Qt. Developped in the mean time as "qompoter-bash", the "qompoter" version aims to provide more features and flexibilities.

In order to simplify numerotation, v0.1 to v0.6 are reserved for "qompoter-bash". Therefore, the first "qompoter" version is v0.7. This may change in a near future.

License
--------------------------------

* Qompoter is distributed under the LGPL3+ license.
* Qompoter is using [JSON.sh](https://github.com/dominictarr/JSON.sh) under the MIT and Apache 2 license. Qompoter unit tests are also based on the JSON.sh unit test architecture.

Please feel free to contribute.

If you have any ideas, critiques, suggestions or whatever you want to call it, please open an issue. I'll be happy to hear from you what you'd see in this tool. I think about all suggestions, and I try to add those that make sense.
