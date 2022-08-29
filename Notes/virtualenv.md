**Notes in virtualenv**
* To install virtualenv, follow the next instructions in ubuntu 20.04 LTS
* `sudo apt-get install python3-pip`, pip install
* `sudo apt install python3-virtualenv python3-venv`, installar virtualenv

for the next part it is necessary to create a directory to activate the environment

* `mkdir dir_you_call`, I am not 100% it is necessary
* Then we create the env using python3.8 `virtualenv -p /usr/bin/python3.8 dir_you_call/`
* to activate the env we use `source dir_you_call/bin/activate` and to deactivate... `deactivate`

Clean and simple, after this we install jupyter and nbgrader with:

* We update pip if it is necessary `pip install --upgrade pip`
* install jupyter and nbgrader `pip install jupyter` and `pip install nbgrader`
* Like we install nbgrader with pip it is necessary to activate the extensions with

`jupyter nbextension install --sys-prefix --py nbgrader --overwrite`
`jupyter nbextension enable --sys-prefix --py nbgrader`
`jupyter serverextension enable --sys-prefix --py nbgrader`

Now we are ready to run nbgrader with jupyter
