extern "C" {
#include "postgres.h"

#if PG_VERSION_NUM >= 90300
#include "access/htup_details.h"
#include "commands/event_trigger.h"
#endif
#if PG_VERSION_NUM >= 100001
#include "utils/queryenvironment.h"
#include "utils/varlena.h"
#endif
#include "access/sysattr.h"
#include "access/xact.h"
#include "catalog/catalog.h"
#include "catalog/objectaccess.h"
#include "catalog/pg_class.h"
#include "catalog/namespace.h"
#include "commands/dbcommands.h"
#include "catalog/pg_proc.h"
#include "executor/executor.h"
#include "executor/spi.h"
#include "miscadmin.h"
#include "libpq/auth.h"
#include "nodes/nodes.h"
#include "tcop/utility.h"
#include "utils/acl.h"
#include "utils/builtins.h"
#include "utils/guc.h"
#include "utils/lsyscache.h"
#include "utils/memutils.h"
#include "utils/rel.h"
#include "utils/syscache.h"
#include "utils/timestamp.h"
#include "postmaster/postmaster.h"
};
