/*
 * $Id$
 *
 * Copyright (C) 2002 Regents of the Univeristy of California
 * Copyright (C) 1995-2002  Jim Garlick
 */
typedef struct {
	char *cf_desc;
	char *cf_host;
	char *cf_path;
	int cf_thresh;
} confent_t;	

#ifndef _PATH_QUOTA_CONF
#define _PATH_QUOTA_CONF "/usr/local/etc/quota.conf"
#endif

void setconfent(char *path);
void endconfent(void);
confent_t *getconfent(void);
