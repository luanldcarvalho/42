## Makefile
|DESCRIPTION|
|---|
|MakeFile is a command directives file. From the moment you run the Make command it looks for a makefile in the current directory. From the moment you run the command, look for a makefile in the current directory.|

|SYNTAX|
|---|
|The standard makefile tag is all and should follow this syntax:|
|all: \n \tab command (Flag, two points, your command on the line underneath and indented).|
|You can also create another directive. Replacing 'all:' to the new name (but without deleting the 'all:' directive). And the other command becomes make name|

|EXAMPLE|DESCRIPTION|
|---|---|
|make|do all:|
|make name| do name:|

|VARIABLE|DESCRIPTION|
|---|---|
|NAME = arguments|NAME receive all arguments after =|
|$(NAME)|To call the variable NAME during the code, can use $(NAME)|

|COMMON TARGETS|DESCRIPTION
|---|---|
|run|start a program|
|clean|clean compiled files|

1. AR
	|FLAG|DESCRIPTION|
	|---|---|
	|ar|create, modify, and extract from archives|
	|SUFFIX|DESCRIPTION|
	|---|---|
	|Suffix r|Insert the files member into archive (with replacement).This operation differs from q in that any previously existing members are deleted if their names match those being added.If one of the files named in member does not exist, ar displays an error message, and leaves undisturbed any existing members of the archive matching that name.By default, new members are added at the end of the file; but you may use one of the modifiers a, b, or i to request placement relative to some existing member.The modifier v used with this operation elicits a line of output for each file inserted, along with one of the letters a or r to indicate whether the file was appended (no old member deleted) or replaced.|
	|Suffix c|Create the archive.The specified archive is always created if it did not exist, when you request an update.But a warning is issued unless you specify in advance that you expect to create it, by using this modifier.|
	|Suffix s|Add an index to the archive, or update it if it already exists.Note this command is an exception to the rule that there can only be one command letter, as it is possible to use it as either a command or a modifier.In either case it does the same thing.|

#### finded in web:
1. [Implicit-Variables](https://www.gnu.org/software/make/manual/html_node/Implicit-Variables.html)
