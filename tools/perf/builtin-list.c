/*
 * builtin-list.c
 *
 * Builtin list command: list all event types
 *
 * Copyright (C) 2009, Thomas Gleixner <tglx@linutronix.de>
 * Copyright (C) 2008-2009, Red Hat Inc, Ingo Molnar <mingo@redhat.com>
 */
#include "builtin.h"

#include "perf.h"

#include "util/parse-options.h"
#include "util/parse-events.h"

int cmd_list(int argc, const char **argv, const char *prefix)
{
	print_events();
	return 0;
}