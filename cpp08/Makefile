
# NAME =

# SRC =

# O = obj/
# I = inc/

# CC = c++
# CFLAGS += -Wall -Wextra -Werror -std=c++98
# CFLAGS += -I$I
# LDFLAGS +=

# OBJ = $(SRC:%=$O%.o)

# RM = /bin/rm -f
# RMDIR = /bin/rm -rf

# all: $(NAME)


# $O: #Create obj directory
# 	@mkdir $@
# 	@echo "\033[0;32mGenerating objects...\033[0m"

# $(OBJ): | $O

# $(OBJ): $O%.o: % #Build objects $< take the name on the right of ":", $@ take the name on the left of ":"
# 	@$(CC) $(CFLAGS) -c $< -o $@
	
# $(NAME): $(OBJ) #Libft will compile only once, use "make libft" to recompile
# 	@echo "\033[0;32mCompiling $(NAME)...\033[0m"
# 	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME) -lreadline -lcurses
# 	@echo "\033[0;32m$(NAME) compiled! Execute as: ./$(NAME) + arguments\033[0m"
	
# cleanobj: #Delete .o files in obj directory
# 	@$(RM) $(wildcard $(OBJ))

# cleanobjdir: cleanobj #Delete obj directory
# 	@$(RMDIR) $O

# clean: cleanobjdir #Delete obj directory and content
# 	@echo "\033[0;31mObjects deleted!\033[0m"

# fclean: clean #Delete objects and executable
# 	@$(RM) $(NAME)
# 	@$(RMDIR) $(NAME).dSYM
# 	@echo "\033[0;31mExecutable deleted!\033[0m"

# fclean-all: fclean #Delete objects, executable, and libft
# 	@make fclean -C $(LIBFT)
# 	@echo "\033[0;31mLibft deleted!\033[0m"

# re: fclean #Delete all and rebuild executable
# 	@make

# libft: #Rebuild libft
# 	@echo "\033[0;31mLibft deleted!\033[0m"
# 	@make re -C $(LIBFT)
# 	@make clean -C $(LIBFT)
# 	@echo "\033[0;32mLibft recompiled!\033[0m"

# debug: $(LIBFTA) $(OBJ) #Compile for debugger
# 	@echo "\033[0;32mCompiling $(NAME)...\033[0m"
# 	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
# 	@echo "\033[0;32m$(NAME) compiled! Execute as: ./$(NAME)\033[0m"

# segfault: $(OBJ)
# 	@$(CC) $(CFLAGS) -fsanitize=address $(OBJ) -o $(NAME)
	
# exe: $(NAME) #Execute program
# 	./$(NAME)

# exe-leak: $(NAME)
# 	valgrind --leak-check=full --trace-children=yes --track-origins=yes --show-leak-kinds=all ./$(NAME)

GIT_REPO = origin

SUBDIRS = $(wildcard */)

$(SUBDIRS): FORCE
	@Make -C $@ fclean

fclean: $(SUBDIRS)

FORCE:

gitupdate:
	printf '\nEnter pull or fetch to update from $(GIT_REPO): ' && read PULLFETCH && \
	printf '\nEnter Branch Name (Press Enter For All Branches): ' && \
	read BRANCH && git $$PULLFETCH $(GIT_REPO) $$BRANCH

gitadd: $(SUBDIRS) #Clean repo before adding files to git
	git add --all -- ':!Makefile'

gitcommit: gitadd #Commit modifications locally before push, takes user input for commit's name
	@printf '\nEnter Commit Name: '
	@read COMMIT && git commit -m "$$COMMIT"

gitpush: gitcommit #Push commit to remote repo
	@printf '\nEnter Branch To Push (Press Enter For ALL): '
	@read PUSH && git push $(GIT_REPO) $$PUSH

# gitmerge: #Merge specific branch to current branch
# 	@printf '\nEnter Branch To Merge With (Press Enter To Merge ALL): '
# 	@read MERGE && git merge $$MERGE && git merge $$MERGE

gitfetch: #Fetch to update branches without merging with local repo
	@printf '\nEnter Branch To Fetch (Press Enter For All Branches): '
	@read FETCH && git fetch $(GIT_REPO) $$FETCH
	
gitpull: #Pull to overwrite local data if repo is different
	@printf '\nEnter Branch To Pull (Press Enter For All Branches): '
	@read PULL && git pull $(GIT_REPO) $$FETCH

list: 	#Show all make rules
	@grep '^[^#[:space:]].*:' Makefile

.PHONY: all clean fclean re
