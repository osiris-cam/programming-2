# **Introduction to structured programming**
-------------------------------------------------------------------------------------------------------------------------

## What is a paradigm?  

Programming paradigms are alternative approaches to programming processes. They fundamentally represent different approaches to building solutions to problems and therefore affect the entire software development process. 
According with [Hackages](https://blog.hackages.io/tech-terms-explained-programming-paradigms-8c4072404f8e):
> Programming is about solving problems and problems can usually be solved in a variety of ways. A programming paradigm is a way to approach a problem. While some programming languages allow you to use only one approach, most popular languages today allow developers to use a combination of them.
On the highest level, we can differentiate between 2 types of programming paradigms: imperative and declarative.

![Varieties of paradigms](https://media.geeksforgeeks.org/wp-content/uploads/1-344.png)

## Implementation methods of the programming paradigms.
According with Edukera, we must bear in mind that both [**interpreted** and **compiled**](https://www.edureka.co/community/6776/compiled-vs-interpreted-languages) programming are codes that translate all syntax into *machine language*. In this case, you have to define what machine language is. Machine language is those instructions that the computer processor understands and is a binary code (1 and 0)
The **compiled language** requires an additional step before its execution and converts the code to machine language, in addition a compiled language is much faster than one interpreted because when it is executed it is already in machine code. In short, it is a program that transforms the source code of a program to its equivalent in another lower-level programming language.

### Examples:
1. C
2. C ++
3. JAVA.
4. Go.

The **interpreted language** is a converter to machine language as it is executed. In short, it is a program that directly executes instructions written in a given programming language and is optimized for the moment of execution.

### Examples:
1. Python.
2. Ruby.
3. JavaScript.
In conclusion, compiling is done to optimize execution work and this means more work for the programmer. In the interpreted, it is made to be easier for the programmer and this means an extra effort for the execution.

Below is an image taken from [Medium](https://medium.com/from-the-scratch/stop-it-there-are-no-compiled-and-interpreted-languages-512f84756664):
![Interpreted and compiled](https://miro.medium.com/max/991/1*3Iy-ohRRXj3lChmEbQTxIQ.png)

## [Classification of programming paradigms.](https://www.geeksforgeeks.org/introduction-of-programming-paradigms/) 

### Imperative Programming paradigm. 
It performs step by step task by changing state. The main focus is on how to achieve the goal. The paradigm consist of several statements and after execution of all the result is stored. Here an [example](https://spines.me/es/help/markdown/syntax/) of code:
```
const container = document.getElementById(‘container’);
const btn = document.createElement(‘button’);
btn.className = ‘btn red’;
btn.onclick = function(event) {
 if (this.classList.contains(‘red’)) {
   this.classList.remove(‘red’);
   this.classList.add(‘blue’);
 } else {
   this.classList.remove(‘blue’);
   this.classList.add(‘red’);
 }
};
container.appendChild(btn);
```
1. **Procedural programming paradigm:**:
  This paradigm emphasizes on procedure in terms of underlying machine model. It has the ability to reuse the code and it was boon at that time when it was in use because of its reusability.  
BASIC, Pascal and C are examples of this paradigm.  
  
2. **Object Oriented Programming:**
  The program is written as a collection of classes and object which are meant for communication. More emphasis is on data rather procedure. It can handle almost all kind of real life problems which are today in scenario. This paradigm Examples: Java, JavaScript, Python, C++, Visual Basic, .NET, Ruby, Scala and PHP
  
3. **Parallel Processing approach:**
  Parallel processing is the processing of program instructions by dividing them among multiple processors. A parallel processing system posses many numbers of processor with the objective of running a program in less time by dividing them. This approach seems to be like divide and conquer.

4. **Von Neumann:
> Anyone that contains a high degree of abstraction and is based on the von Neumann architecture is considered a programming language of the von Neumann type. .
Since programming languages like Fortran, C or Java were created in imitation of the von Neumann programming style, the differences between the three are barely noticeable. All programming is based on von Neumann's computer programming style.

> Some similarities of form between programming languages and von Neumann architecture are:
- Variables ↔ Storage cells
- Control instructions ↔ jump instructions
- Assignment instructions ↔ search, storage of instructions.
- Expressions ↔ Memory references and arithmetic instructions.

5. **Interpreted (Scripting):
  [Interpreted](https://whatis.techtarget.com/definition/interpreted-script), sometimes is called script, is a logically sequenced series of operating system commands, handled one at a time by a command interpreter. It is a computer program capable of analyzing and executing other programs. Interpreters differ from compilers or assemblers in that while translators translate a program from its description in a programming language to the system machine code, the interpreters only perform the translation as needed, typically instruction by instruction. , and normally do not save the result of such translation.

### Declarative Programming paradigm.
Is a style of building programs that expresses logic of computation without talking about its control flow. The focus is on what needs to be done rather how it should be done basically emphasize on what code code is actually doing. It just declare the result we want rather how it has be produced. Here an [example](https://spines.me/es/help/markdown/syntax/) in a code:  
```
 class Button extends React.Component{
  this.state = { color: 'red' }
  handleChange = () => {
    const color = this.state.color === 'red' ? 'blue' : 'red';
    this.setState({ color });
  }
  render() {
    return (<div>
      <button 
         className=`btn ${this.state.color}`
         onClick={this.handleChange}>
      </button>
    </div>);
  }
}
```

1. **Logic Programming paradigm:**
  It can be termed as abstract model of computation. It would solve logical problems like puzzles, series etc. In logic programming we have a knowledge base which we know before and along with the question and knowledge base which is given to machine, it produces result.Examples: Mercury, ECLiPSe, QL, PROGOL, etc. 
  
2. **Functional Programming:**
  The functional programming paradigms has its roots in mathematics and it is language independent. The key principal of this paradigms is the execution of series of mathematical functions. The central model for the abstraction is the function which are meant for some specific computation and not the data structure. Examples:Python, Haskell, Lisp, Erlang y Clojure. 
  
3. **Databases Processing approach:**
  This programming methodology is based on data and its movement. Program statements are defined by data rather than hard-coding a series of steps. Examples: SQL.
  
4. **Structured**:
   Programming with clean, goto-free, nested control structures. Is a kind of imperative programming where control flow is defined by nested loops, conditionals, and subroutines, rather than via gotos. Variables are generally local to blocks.
 
 5. **Dataflow Programming paradigm**: 
   The control follows data and computations are executed implicitly based on data availability. Dataflow abstracts over explicit control flow by placing the emphasis on the routing and transformation of data.
 
 6. **Template-Based Programming paradigm**:
   Programming paradigm in which programs are constructed by using pre built templates. Code is generated by instantiating some kind of code template with some parameters (the domain-specific program).

7. **Structured Programming paradigm**:
   Programming paradigm aimed at improving the clarity, quality, and development time of a computer program by making extensive use of the structured control flow constructs of selection and repetition, block structures, and subroutines.


  
## [Programming language.](https://hackr.io/blog/what-is-programming-language)
A programming language is the translation from human language to machine language and is designed to carry out processes that only computers can achieve. They are used to create codes that control the behavior of the computer. These codes are expressed as algorithms as a mode of human communication. It is made up of symbols and syntactic rules that define its structure and the meaning of each expression and element. In addition there is a process which is testing, debugging, compilation and then the source code is maintained. That is called programming.
There are three types of programming language:
1. **Machine language (low level language)**:
 Collection of binary digits or bits that the computer reads and interprets (0 and 1)
2. **Assembly language (low level language)**:
  They are instructions, arithmetic operations such as ADD, SUB, DIV. Its advantages is that it has a higher encoding speed and its disadvantage is that it is not portable.
3. **High-level language**.
  Designed to make people write and understand the programs easier than the previous two. An example of them is C, Python, Java, etc.
 
## [Sequential algorithms](https://www.sciencedirect.com/topics/computer-science/sequential-algorithm)
That in which one action follows another successively. A sequence is continued from the entry and exit of the actions until the process ends.
Example:
```
#include <stdio.h>
#include <math.h>
int main (){
	float cate1, cate2, hipotenusa;
	
	printf("Ingrese los dos catetos de triangulo, por favor:\n");		scanf("%f %f",&cate1, &cate2);
	hipotenusa= sqrt(pow(cate1,2)+ pow(cate2,2));
	printf("La hipotenusa es igual a %.1f",hipotenusa);
	
	
	return 0;
}
```
## Source Code.  
Is specially designed to facilitate the work of computer programmers, who specify the actions to be performed by a computer mostly by writing source code. Contains all the written instructions of a program to be later translated into machine language and executed.

## Spaghetti Code.
According with [Techopedia](https://www.techopedia.com/definition/9476/spaghetti-code):
> Spaghetti code is a slang term used to refer to a tangled web of programming source code where control within a program jumps all over the place and is difficult to follow. Spaghetti code normally has a lot of GOTO statements and is common in old programs, which used such statements extensively.
The rise of more structured programming languages, like object-oriented programming languages, has reduced the prevalence of spaghetti code.

![spaghetti code](https://craftofcoding.files.wordpress.com/2013/10/pi_forspaghetti.jpg)

## Structured programm. 
[Structured programming](https://www.geeksforgeeks.org/structured-programming-approach-with-advantages-and-disadvantages/) can be defined with a focus on where the Program is executed with a unique structure in order to be Clear, precise and to optimize time. In other words, the code works instruction after instruction. It uses only subroutines and three structures: sequence, selection (if and switch) and iteration (for and while loops). It does not support the ability to jump from one statement to another with the help of a statement like GOTO.
[Structured programming](https://searchsoftwarequality.techtarget.com/definition/structured-programming-modular-programming) sometimes known as modular programmingis a programming paradigm that facilitates the creation of programs with readable code and reusable components. All modern programming languages support structured programming, but the mechanisms of support, like the syntax of the programming languages, varies.
### Examples:
1. C
2. C ++
3. Java
4. C #  

![Ven](https://media.geeksforgeeks.org/wp-content/uploads/Programming-Approach.jpg)

## Data representations and operators.  

### Data Representation
- [**Identifier**]( http://aboutc.weebly.com/identifiers.html
): is a string of alphanumeric characters that begins with an alphabetic character or an underscore character that are used to represent various programming elements such as variables, functions, arrays, structures, unions and so on.
- [**Variables**](https://press.rebus.community/programmingfundamentals/chapter/constants-and-variables/
):  is a value that can change, depending on conditions or on information passed to the program.
- **Constants**:  is a value that cannot be altered by the program during normal execution.
- [**Reserved Words**](https://www.computerhope.com/jargon/r/reseword.htm
): 
Reserved words are a term widely used in programming that consist of a group of identifiers that have a very important characteristic, they cannot be used by a user or programmer to name or refer to either variables, functions, objects, or any other programming item you want to create. This happens because the programming language itself contains them included and the objective is not to confuse and cause an error to the program.
Example:
do
else
for
if
return
void
while
However, it depends of the programming lenguage. 

- [**Types of data**]( https://dl.sumdu.edu.ua/textbooks/103395/597162/index.html
): is a type together with a collection of operations to manipulate the type.
  - Primitive: are predefined types of data, which are supported by the programming language. 
    - Boolean (e.g. True or False)
    - Character (e.g. abc)
    - Date (e.g. 03/01/2017)
    - Double (e.g. 1.87651234355743E308)
    - Floating-point number (e.g. 1.23)
    - Integer (e.g. 123)
    - Long (e.g. 123456789)
    - Short (e.g. 0)
    - String (e.g. abc)
    - Void (e.g. no data)
  - **Derivied**: is one whose values are composed of component values. One example is an array.
  - **User defined**: are mathematical models of a set of data values or information that share similar behavior or qualities and that can be specified and identified independent of specific implementations. An abstract data type is defined in term of its data items or its associated operations rather than by its implementation.  
   ![data type](https://2.bp.blogspot.com/-vKeEhq3QPvA/Wvv5BGg8g1I/AAAAAAAAMSQ/-iBoXVQcI0g0tCVuMSA5IlvqqeqxQ1hjgCLcBGAs/s1600/1.jpeg)
- [**Memory space for each data type**](https://www.tutorialspoint.com/cprogramming/c_data_types.htm
):
  - Character: 1 byte
  - Unsigned character: 1 byte
  - Signed Character: 1 byte
  - Integer: 2 or 4 bytes
  - Unsigned Integer: 2 or 4 bytes
  - Short: 2 bytes
  - Unsigned Short: 2 bytes
  - Long: 8 bytes
  - Unsigned Long: 8 bytes
- [Range of values of each data type](https://xcbiology.files.wordpress.com/2015/07/table-e1438380260928.png):
  - Character: -128 to 127 or 0 to 255
  - Unsigned character: 0 to 255
  - Signed Character: -128 to 127
  - Integer: -32,768 to 32,767 or -2,147,483,648 to 2,147,483,647
  - Unsigned Integer: 0 to 65,535 or 0 to 4,294,967,295
  - Short: -32,768 to 32,767
  - Unsigned Short: 0 to 65,535
  - Long: -9223372036854775808 to 9223372036854775807
  - Unsigned Long: 0 to 18446744073709551615
- [**Data type conversion**](https://developerinsider.co/type-casting-c-programming/
): refers to either implicitly or explicitly changing a value from one data type storage format to another, e.g. a 16-bit integer to a 32-bit integer.  
Continued there is a graphic representation about data types from [Xin's story](https://datachenblog.com/2015/07/31/cc-data-type-and-memory-management/)

![C/ c++ data types and memory](https://xcbiology.files.wordpress.com/2015/07/table-e1438380260928.png)

### Operators
- ***Conditional***: is an operator that returns one of two values depending on the result of an expression. It is represent with **“?:”**
- ***Logical***: Returns the result of a boolean operation.
  - Negation: It represents with **!**.
  - AND: It represents with **&&**.
  - Inclusive Or: It represents with **||**.
- ***Relationship***: are used to compare values of two variables.
  - Greater than >.
  - Greater than or equal to **>=**
  - Less than <
  - Less than or equal to **<=**
  - Equal to **==**
  - Not equal to **!=**
  
  Below is a descriptive image taken from the National Institute of [Open Schooling](http://oer.nios.ac.in/wiki/index.php/List_of_operators_used_in_JavaScript)

![List of operators in c](https://4.bp.blogspot.com/-HkkiDDgQ93c/Uuor0-Uh4nI/AAAAAAAAAbE/oYKfenLfF3E/s1600/460.gif)
  
  ## Version control.  
  
[Version control](https://www.git-tower.com/learn/git/ebook/en/command-line/basics/what-is-version-control) is a piece of software that allows a person to manage the various changes made to a file. In other words, the version control tool is used to encode versions, binary and digital files.
Version control is sometimes called revision control and is a priority component in software configuration management. 

### How Does Version Control Work?
This tool allows many developers to work together on the same protector. This happens when the project becomes more complex and there is a need to handle multiple versions.

Version control is important for all code, files, and assets that multiple team members will collaborate on. Using version control software helps you keep track of changes and keep every team member working off the latest version. 
It needs to do more than just manage and track files. It should help you develop and ship products faster. 

That’s because using the right one:  
- Improves visibility. 
- Helps teams collaborate around the world. 
- Accelerates product delivery.  

![How does it work](https://miro.medium.com/max/1248/1*l08qyjBnX7K12p4DcINn3w.png)

#### Varieties: Distributed and centralized version control.
According with Michael Ernst, [there are two types of version control](https://homes.cs.washington.edu/~mernst/advice/version-control.html), **centralized** and **distributed**. **Distributed** is  much faster to execute because it has more functions. All developers have their own copy of the repository, with all versions and all history. Of course, as they develop and make changes, their sources and versions are different from each other. However it is a little more complex and there is no main repository.  

![Distributed](https://homes.cs.washington.edu/~mernst/advice/version-control-fig3.png)  

##### Examples:
1. Git.
2. Baazaar.
3. Mercurial.
4. Darcs.  

On the other hand, in the **centralized** all the sources and their versions are stored in a single directory, which is called the source repository, of a computer (server). For this reason, developers who want to work with those fonts should ask the version control system for a local copy to work with.  

![Centralized](https://homes.cs.washington.edu/~mernst/advice/version-control-fig2.png)

##### Examples:
1. CVS.
2. Subversion.

# Gitbash commands.
---------------------------------------------------
## Chapter 2.

### Getting a git repository
1. Initializing a Repository in an Existing Directory:
With the command “git init” create a new subdirectory named .git that contains all of your necessary repository files.
2. Cloning an Existing Repository:
With the command “git clone (URL)” with this you copy the files of github that 
will be in this URL.

### Recording Changes to the Repository

![life cycle](https://uniwebsidad.com/static/libros/imagenes/pro-git/18333fig0201.png)
The command **“git status”** is use to determine which files are in which state.
When you create a new file in your computer, the file is ubicated in untracked, when you use “git add (name of the file)” is translated to unmodified, when you use **“git commit -m “any comment”** is translated to modified and after you can translated to staged with other commands.
- You use **“git diff”** to watch, what was modificated in the file.
- You use **“git rm”** to delete some files.
- You use **“git mv”** to move files.

### Viewing the Commit History
**“Git log”** command is to look back and see what was happened.
One of the more helpful options is -p, which shows the diff introduced in each commit. You can also use -2, which limits the output to only the last two entries.
If you want to see some abbreviated stats for each commit, you can use the --stat option.
Another really useful option is --pretty. This option changes the log output to formats other than the default. In this case the most interesting option is format, which allows you to specify your own log output format. This is especially useful when you’re generating output for machine parsing.

### Git format:
- %H: Commit hash

- %h: Abbreviated commit hash

- %T: Tree hash

- %t: Abbreviated tree hash

- %P: Parent hashes

- %p: Abbreviated parent hashes

- %an: Author name

- %ae: Author email

- %ad: Author date (format respects the --date=option)

- %ar: Author date, relative

- %cn: Committer name

- %ce: Committer email

- %cd: Committer date

- %cr: Committer date, relative

- %s: Subject

### Common options to **git log**:
- **-p:** Show the patch introduced with each commit.

- **--stat:** Show statistics for files modified in each commit.

- **--shortstat:** Display only the changed/insertions/deletions line from the --stat command.

- **--name-only:**  Show the list of files modified after the commit information.

- **--name-status:** Show the list of files affected with added/modified/deleted information as well.

- **--abbrev-commit:** Show only the first few characters of the SHA-1 checksum instead of all 40.

- **--relative-date:** Display the date in a relative format (for example, “2 weeks ago”) instead of using the full date format.

- **--graph:** Display an ASCII graph of the branch and merge history beside the log output.

- **--pretty**: Show commits in an alternate format. Options include oneline, short, full, fuller, and format (where you specify your own format).

- **--oneline:** Shorthand for --pretty=oneline --abbrev-commit used together.

### Undoing Things
**“git commit --amend”** takes your staging area and uses it for the commit. If you’ve made no changes since your last commit. Remember, anything that is committed in Git can almost always be recovered. Even commits that were on branches that were deleted or commits that were overwritten with an --amend commit can be recovered.

### Working with Remotes
To be able to collaborate on any Git project, you need to know how to manage your remote repositories. Remote repositories are versions of your project that are hosted on the Internet or network somewhere. 
To see which remote servers you have configured, you can run the “git remote” command. You can also specify -v, which shows you the URL that Git has stored for the shortname to be expanded. 
To add a new remote Git repository as a short name you can reference easily, run **“git remote add [shortname] [url]”**.
**“Git fetch {remote name}** The command goes out to that remote project and pulls down all the data from that remote project that you don’t have yet. After you do this, you should have references to all the branches from that remote, which you can merge in or inspect at any time.
When you have your project at a point that you want to share, you have to push it upstream, you use **git push [remote-name] (branch-name]**.
If you want to see more information about a particular remote, you can use the git remote show **[remote-name]** command.
If you want to rename a reference, in newer versions of Git you can run git remote rename to change a remote’s shortname.

## Tagging
“git tag” This command lists the tags in alphabetical order; the order in which they appear has no real importance. 
The -m specifies a tagging message, which is stored with the tag. If you don’t specify a message for an annotated tag, Git launches your editor so you can type it in. You can see the tag data along with the commit that was tagged by using the git show command:

```
$ git show v1.4
tag v1.4
Tagger: Ben Straub <ben@straub.cc>
Date:   Sat May 3 20:19:12 2014 -0700

my version 1.4

commit ca82a6dff817ec66f44342007202690a93763949
Author: Scott Chacon <schacon@gee-mail.com>
Date:   Mon Mar 17 21:52:11 2008 -0700

    Change version number
```

## Chapter 3: Branch.
A branch represents an independent line of development, it's like creating a new workspace with your staging area and track record. New commits will be recorded independently in the branch history, which is known as forks in the project history (a term widely used in github).

- **git branch**:
This command lists the local branches that exist. The branch you are currently working on is marked with an asterisk. The master branch is the branch that you start with in any project, and it is the one that is used as the main branch where the project is in its final state.

- **git branch [branch]**:
This command creates a branch with the name of your choice.

- **git checkout [branch]**:
If we were in the master branch, we had modified files without adding or added in the staging area, and we are located in the experiment branch with git checkout, these changes will be seen in the experiment branch. Until a commit is made, the changes will not belong to any branch.

- **git branch -v:**
This command displays the last commit on each branch.

- **git checkout -b [branch]:**
This code creates a branch and directly checks it. It is the code that is usually used since when a branch is created, it is usually checked out.

- **git branch -d [branch]:**
Delete a branch.

- **git merge:**
When only files have been added or removed in a branch, it is easy to link it to the main branch. The result will simply be the addition or subtraction of those files in the main one. When modifications are made to files, including changes to file names, git detects those changes and automatically adapts them

- **git log:**
shows all the commits that have led to the snapshot you are in.

- **git remote:**
The git command is used to connect to a remote repository. The following command shows the remote repositories that are currently configured.

- **git remote -v:**
This command allows you to connect the user with the local repository to a remote server:

git remote add origin <93.188.160.58>

- **git fetch:**
This command allows the user to search for all objects in a remote repository that does not currently reside in the local directory they are working on. For example:
git fetch origin.

- **margetool:**
Yes, instead of solving directly, you prefer to use a graphical tool. You can use the git mergetool command. This will start the corresponding visualization tool and will allow you to resolve conflicts with it.

- **git branch - - merged:**
To find out the status of the branches, it is to filter them and show only those that have been merged (or have not been) with the currently active branch

- **git branch --no-merged:**
To show all branches containing jobs without merging yet.

- **git clone (url):**
Clone a repository.

- **git remote add (name) (url):**
Configure a remote repository.

- **git remote:**
Lists the remote repositories.

- **git push -u (remote) (rama):** Synchronize the branch with the remote one the first time.
git push: send the new commits to the remote branch.

- **git push -f (remote) (rama):**
Replaces the remote branch with the history of the local branch.

- **git pull:**
Update the commits of the remote branch.

- **git checkout (rama):**
Unloads the remote branch if it does not exist locally.

- **git fetch (remote):** 
Update the information of the remote repository.

- **git pass (remote) / (rama):**
Pass local branch against remote

### Solve conflicts between branches with merge.
Conflicts appear when the same piece of code has been modified in two different branches.
For example:
```
Auto-merging hola.txt
CONFLICT (content): Merge conflict in hola.txt
​Automatic merge failed; fix conflicts
```
We open the file hello.txt (we continue in the master branch) and now the text appears like this:
```
<<<<<<< HEAD
Hola que tal
=======
Hola como estás
>>>>>>> cambios
```
We remove the parts that git has added in the code, we solve the conflito created and we add the result to the staging area with git add.

## ***Equipo***:
1. Osiris Cámara Salinas.
2. Victor Uribe Hernandez. 
