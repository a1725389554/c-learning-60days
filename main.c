#include"student.h"
#include<stdio.h>
#include<stdlib.h>
// Day10 git test 
int main() {
    int count = 0;
    //Student arr[100];
    int choice;
    int capacity = 2;
    printf("Hello teammate!\n");
    Student *arr = (Student *)malloc((capacity * sizeof(Student)));

    while(1) {
        printf("1. 添加学生\n");
        printf("2. 打印学生\n");
        printf("3. 查找学生\n");
        printf("4. 删除学生\n");
        printf("0. 退出程序\n");
        printf("请选择：");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("你选择了输入学生信息\n");
                addStudent(&arr, &count,&capacity);
                break;
            case 2:
                printf("你选择了打印学生信息\n");
                printStudent(arr, count);
                break;
            case 3:
                printf("你选择了查找学生\n");
                findStudent(arr, count);
                break;
            case 4:
                printf("你选择了删除学生\n");
                deleteStudent(arr,&count);
                break;
            case 0:
                free(arr);
                return 0;        
            default:
                printf("输入错误\n");
        }
    }

    return 0;
}

// git的应用和使用历史（ctrl＋/  是注释）
// jesse@DNQT-KJL13M:~$ git --version
// git version 2.43.0
// jesse@DNQT-KJL13M:~$ cd ~
// jesse@DNQT-KJL13M:~$ cd ~/day9
// bash: cd: /home/jesse/day9: No such file or directory
// jesse@DNQT-KJL13M:~$ cd project
// jesse@DNQT-KJL13M:~/project$ cd ~/day9
// bash: cd: /home/jesse/day9: No such file or directory
// jesse@DNQT-KJL13M:~/project$ cd ~/day9
// bash: cd: /home/jesse/day9: No such file or directory
// jesse@DNQT-KJL13M:~/project$ pwd
// /home/jesse/project
// jesse@DNQT-KJL13M:~/project$ ls
// day1  day2  day3  day4  day5  day6  day7  day8  day9
// jesse@DNQT-KJL13M:~/project$ cd day9
// jesse@DNQT-KJL13M:~/project/day9$ git init
// hint: Using 'master' as the name for the initial branch. This default branch name
// hint: is subject to change. To configure the initial branch name to use in all
// hint: of your new repositories, which will suppress this warning, call:
// hint: 
// hint:   git config --global init.defaultBranch <name>
// hint: 
// hint: Names commonly chosen instead of 'master' are 'main', 'trunk' and
// hint: 'development'. The just-created branch can be renamed via this command:
// hint: 
// hint:   git branch -m <name>
// Initialized empty Git repository in /home/jesse/project/day9/.git/
// jesse@DNQT-KJL13M:~/project/day9$ git status
// On branch master

// No commits yet

// Untracked files:
//   (use "git add <file>..." to include in what will be committed)
//         Makefile
//         app
//         main.c
//         student.c
//         student.h

// nothing added to commit but untracked files present (use "git add" to track)
// jesse@DNQT-KJL13M:~/project/day9$ git add .
// jesse@DNQT-KJL13M:~/project/day9$ git commit -m "day9"
// Author identity unknown

// *** Please tell me who you are.

// Run

//   git config --global user.email "you@example.com"
//   git config --global user.name "Your Name"

// to set your account's default identity.
// Omit --global to set the identity only in this repository.

// fatal: empty ident name (for <jesse@DNQT-KJL13M.localdomain>) not allowed
// jesse@DNQT-KJL13M:~/project/day9$ git commit -m "day9: add student project"
// Author identity unknown

// *** Please tell me who you are.

// Run

//   git config --global user.email "you@example.com"
//   git config --global user.name "Your Name"

// to set your account's default identity.
// Omit --global to set the identity only in this repository.

// fatal: empty ident name (for <jesse@DNQT-KJL13M.localdomain>) not allowed
// jesse@DNQT-KJL13M:~/project/day9$ git config --global user.name "jesse"
// jesse@DNQT-KJL13M:~/project/day9$ git config --global user.email "1725389554@qq.com"
// jesse@DNQT-KJL13M:~/project/day9$ git config --list
// safe.directory=*
// user.name=jesse
// user.email=1725389554@qq.com
// core.repositoryformatversion=0
// core.filemode=true
// core.bare=false
// set mark: ...skipping...
// safe.directory=*
// safe.directory=*
// user.name=jesse
// safe.directory=*
// user.email=1725389554@qq.com
// core.repositoryformatversion=0
// core.filemode=true
// core.bare=false
// core.logallrefupdates=true
// set mark: ...skipping...
// safe.directory=*
// safe.directory=*
// user.name=jesse
// user.email=1725389554@qq.com
// core.repositoryformatversion=0
// core.filemode=true
// core.bare=false
// core.logallrefupdates=true

// [1]+  Stopped                 git config --list
// jesse@DNQT-KJL13M:~/project/day9$ git commit -m "day9: add student project"
// [master (root-commit) 918103d] day9: add student project
//  5 files changed, 129 insertions(+)
//  create mode 100644 Makefile
//  create mode 100755 app
//  create mode 100644 main.c
//  create mode 100644 student.c
//  create mode 100644 student.h
// jesse@DNQT-KJL13M:~/project/day9$ git log
// commit 918103df01fe15750ad7b00ccd08857f72a1800f (HEAD -> master)
// Author: jesse <1725389554@qq.com>
// Date:   Wed Aug 19 12:23:14 2026 +0800

//     day9: add student project
// jesse@DNQT-KJL13M:~/project/day9$ gitignore
// Command 'gitignore' not found, did you mean:
//   command 'git-ignore' from deb git-extras (7.1.0-1)
// Try: sudo apt install <deb name>
// jesse@DNQT-KJL13M:~/project/day9$ .gitnore
// .gitnore: command not found
// jesse@DNQT-KJL13M:~/project/day9$ .gitignore
// .gitignore: command not found
// jesse@DNQT-KJL13M:~/project/day9$ .gitignore
// .gitignore: command not found
// jesse@DNQT-KJL13M:~/project/day9$ git status
// On branch master
// Changes not staged for commit:
//   (use "git add <file>..." to update what will be committed)
//   (use "git restore <file>..." to discard changes in working directory)
//         modified:   main.c

// Untracked files:
//   (use "git add <file>..." to include in what will be committed)
//         "tudent project\""

// no changes added to commit (use "git add" and/or "git commit -a")
// jesse@DNQT-KJL13M:~/project/day9$ ls
//  Makefile   app   main.c   student.c   student.h  'tudent project"'
// jesse@DNQT-KJL13M:~/project/day9$ rm 'tudent project"'
// jesse@DNQT-KJL13M:~/project/day9$ git status
// On branch master
// Changes not staged for commit:
//   (use "git add <file>..." to update what will be committed)
//   (use "git restore <file>..." to discard changes in working directory)
//         modified:   main.c

// no changes added to commit (use "git add" and/or "git commit -a")
// jesse@DNQT-KJL13M:~/project/day9$ git add main,c
// fatal: pathspec 'main,c' did not match any files
// jesse@DNQT-KJL13M:~/project/day9$ git add main.c
// jesse@DNQT-KJL13M:~/project/day9$ git status
// On branch master
// Changes to be committed:
//   (use "git restore --staged <file>..." to unstage)
//         modified:   main.c

// jesse@DNQT-KJL13M:~/project/day9$ git commit -m "day10:test git workflow"
// [master 3cccf92] day10:test git workflow
//  1 file changed, 1 insertion(+), 1 deletion(-)
// jesse@DNQT-KJL13M:~/project/day9$ git diff
// jesse@DNQT-KJL13M:~/project/day9$ git diff --staged
// jesse@DNQT-KJL13M:~/project/day9$ git status
// On branch master
// nothing to commit, working tree clean
// jesse@DNQT-KJL13M:~/project/day9$ git diff staged
// fatal: ambiguous argument 'staged': unknown revision or path not in the working tree.
// Use '--' to separate paths from revisions, like this:
// 'git <command> [<revision>...] -- [<file>...]'
// jesse@DNQT-KJL13M:~/project/day9$ git diff --staged
// jesse@DNQT-KJL13M:~/project/day9$ git diff HEAD
// jesse@DNQT-KJL13M:~/project/day9$ git status
// On branch master
// nothing to commit, working tree clean
// jesse@DNQT-KJL13M:~/project/day9$ git status
// On branch master
// Changes not staged for commit:
//   (use "git add <file>..." to update what will be committed)
//   (use "git restore <file>..." to discard changes in working directory)
//         modified:   main.c

// no changes added to commit (use "git add" and/or "git commit -a")
// jesse@DNQT-KJL13M:~/project/day9$ git diff
// diff --git a/main.c b/main.c
// index 3248045..e5ced3c 100644
// --- a/main.c
// +++ b/main.c
// @@ -2,6 +2,7 @@
//  #include<stdio.h>
//  #include<stdio.h>
//  #include<stdlib.h>
//  // Day10 git test
// +// git test
//  int main() {
//      int count = 0;

// [2]+  Stopped                 git diff
// jesse@DNQT-KJL13M:~/project/day9$ git add main.c
// jesse@DNQT-KJL13M:~/project/day9$ git diff
// jesse@DNQT-KJL13M:~/project/day9$ git status
// On branch master
// Changes to be committed:
//   (use "git restore --staged <file>..." to unstage)
//         modified:   main.c

// jesse@DNQT-KJL13M:~/project/day9$ git diff --staged
// diff --git a/main.c b/main.c
// index 3248045..e5ced3c 100644
// --- a/main.c
// +++ b/main.c
// @@ -2,6 +2,7 @@
//  #include<stdio.h>
//  ESCOD
// diff --git a/main.c b/main.c
// index 3248045..e5ced3c 100644
// --- a/main.c
// +++ b/main.c
// @@ -2,6 +2,7 @@
//  #include<stdio.h>
//  #include<stdlib.h>
//  // Day10 git test
// +// git test
//  int main() {
//      int count = 0;
//      //Student arr[100];
// (END)
//  #include<stdlib.h>
//  // Day10 git test
// +// git test
//  int main() {
//      int count = 0;
//      //Student arr[100];
// (END)
//  #include<stdlib.h>
//  // Day10 git test
// +// git test
//  int main() {
//      int count = 0;
//      //Student arr[100];
// (END)
//  #include<stdlib.h>
//  // Day10 git test
// +// git test
//  int main() {
//      int count = 0;
//      //Student arr[100];

// [3]+  Stopped                 git diff --staged
// jesse@DNQT-KJL13M:~/project/day9$ git commit -m "day10"
// [master af19c9c] day10
//  1 file changed, 1 insertion(+)
// jesse@DNQT-KJL13M:~/project/day9$ git status
// On branch master
// nothing to commit, working tree clean
// jesse@DNQT-KJL13M:~/project/day9$ git status
// On branch master
// Changes not staged for commit:
//   (use "git add <file>..." to update what will be committed)
//   (use "git restore <file>..." to discard changes in working directory)
//         modified:   main.c

// no changes added to commit (use "git add" and/or "git commit -a")
// jesse@DNQT-KJL13M:~/project/day9$ git add main.c
// jesse@DNQT-KJL13M:~/project/day9$ git status
// On branch master
// Changes to be committed:
//   (use "git restore --staged <file>..." to unstage)
//         modified:   main.c

// jesse@DNQT-KJL13M:~/project/day9$ git diff
// jesse@DNQT-KJL13M:~/project/day9$ git add .
// jesse@DNQT-KJL13M:~/project/day9$ git diff
// jesse@DNQT-KJL13M:~/project/day9$ git diff --staged
// diff --git a/main.c b/main.c
// index e5ced3c..3248045 100644
// --- a/main.c
// +++ b/main.c
// @@ -2,7 +2,6 @@
//  #include<stdio.h>
//  #include<stdlib.h>
//  // Day10 git test
// -// git test
//  int main() {
//      int count = 0;
//      //Student arr[100];

// [4]+  Stopped                 git diff --staged
// jesse@DNQT-KJL13M:~/project/day9$ git commit -m "day10"
// [master c7c2bc5] day10
//  1 file changed, 1 deletion(-)
// jesse@DNQT-KJL13M:~/project/day9$ git status
// On branch master
// nothing to commit, working tree clean
// jesse@DNQT-KJL13M:~/project/day9$ git --log
// unknown option: --log
// usage: git [-v | --version] [-h | --help] [-C <path>] [-c <name>=<value>]
//            [--exec-path[=<path>]] [--html-path] [--man-path] [--info-path]
//            [-p | --paginate | -P | --no-pager] [--no-replace-objects] [--bare]
//            [--git-dir=<path>] [--work-tree=<path>] [--namespace=<name>]
//            [--config-env=<name>=<envvar>] <command> [<args>]
// jesse@DNQT-KJL13M:~/project/day9$ git log
// commit c7c2bc5fd47c5ffba315eac1f64a0ccf59a77735 (HEAD -> master)
// Author: jesse <1725389554@qq.com>
// Date:   Wed Aug 19 15:10:49 2026 +0800

//     day10

// commit af19c9c5f7739237ca9c3455acd7e4b36188d04c
// Author: jesse <1725389554@qq.com>
// Date:   Wed Aug 19 15:03:48 2026 +0800

//     day10

// commit 3cccf929706cf549c88022a9067ff211677d834c
// Author: jesse <1725389554@qq.com>
// Date:   Wed Aug 19 14:05:47 2026 +0800

//     day10:test git workflow

// commit af19c9c5f7739237ca9c3455acd7e4b36188d04c
// Author: jesse <1725389554@qq.com>
// Date:   Wed Aug 19 15:03:48 2026 +0800

//     day10

// commit 3cccf929706cf549c88022a9067ff211677d834c
// Author: jesse <1725389554@qq.com>
// Date:   Wed Aug 19 14:05:47 2026 +0800

//     day10:test git workflow
// commit 3cccf929706cf549c88022a9067ff211677d834c
// Author: jesse <1725389554@qq.com>
// Date:   Wed Aug 19 14:05:47 2026 +0800

//     day10:test git workflow


// [5]+  Stopped                 git log
// jesse@DNQT-KJL13M:~/project/day9$ git branch
// * master
// jesse@DNQT-KJL13M:~/project/day9$ git branch delete-student
// jesse@DNQT-KJL13M:~/project/day9$ git branch
//   delete-student
// * master
// jesse@DNQT-KJL13M:~/project/day9$ git swich delete-student
// git: 'swich' is not a git command. See 'git --help'.

// The most similar command is
//         switch
// jesse@DNQT-KJL13M:~/project/day9$ git switch delete-student
// Switched to branch 'delete-student'
// jesse@DNQT-KJL13M:~/project/day9$ git branch
// * delete-student
//   master
// jesse@DNQT-KJL13M:~/project/day9$ git add student.c
// jesse@DNQT-KJL13M:~/project/day9$ git diff
// jesse@DNQT-KJL13M:~/project/day9$ git status
// On branch delete-student
// Changes to be committed:
//   (use "git restore --staged <file>..." to unstage)
//         modified:   student.c

// jesse@DNQT-KJL13M:~/project/day9$ git commit -m "add delete"
// [delete-student aec255d] add delete
//  1 file changed, 2 insertions(+), 1 deletion(-)
// jesse@DNQT-KJL13M:~/project/day9$ git switch master
// Switched to branch 'master'
// jesse@DNQT-KJL13M:~/project/day9$ git merge delete-student
// Updating c7c2bc5..aec255d
// Fast-forward
//  student.c | 3 ++-
//  1 file changed, 2 insertions(+), 1 deletion(-)
