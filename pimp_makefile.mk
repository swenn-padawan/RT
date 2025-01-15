# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    pimp_makefile.mk                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: stetrel <stetrel@42angouleme.fr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/15 14:10:48 by stetrel           #+#    #+#              #
#    Updated: 2025/01/15 14:10:50 by stetrel          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

BOLD= \033[1m
OK_COLOR= \033[0;32m
ERROR_COLOR= \033[0;31m
WARN_COLOR= \033[0;33m
NO_COLOR= \033[m
OK_STRING= "[✓]"
ERROR_STRING= "[✖]"
WARN_STRING= "[⚠]"
COM_STRING= "Compiling"

define run_and_test
printf "%b" "$(COM_STRING) $(@F)$(NO_COLOR)\r"; \
$(1) 2> $@.log; \
RESULT=$$?; \
if [ $$RESULT -ne 0 ]; then \
  printf "%-60b%b" "$(COM_STRING) $(BOLD)$@" "$(ERROR_COLOR)$(ERROR_STRING)$(NO_COLOR)\n"   ; \
elif [ -s $@.log ]; then \
  printf "%-60b%b" "$(COM_STRING) $(BOLD)$@" "$(WARN_COLOR)$(WARN_STRING)$(NO_COLOR)\n"   ; \
else  \
  printf "%-60b%b" "$(COM_STRING) $(BOLD)$(@F)" "$(OK_COLOR)$(OK_STRING)$(NO_COLOR)\n"   ; \
fi; \
cat $@.log; \
rm -f $@.log; \
exit $$RESULT
endef
