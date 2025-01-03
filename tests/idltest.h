/* Generated automatically -- do not modify!    -*- buffer-read-only: t -*- */

#ifndef IDLTEST_IDL_HEADER
#define IDLTEST_IDL_HEADER 1

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include "openvswitch/json.h"
#include "ovsdb-data.h"
#include "ovsdb-idl-provider.h"
#include "smap.h"
#include "uuid.h"

#ifdef  __cplusplus
extern "C" {
#endif


/* indexed table. */
struct idltest_indexed {
	struct ovsdb_idl_row header_;

	/* i column. */
	int64_t i;
};

enum idltest_indexed_column_id {
    IDLTEST_INDEXED_COL_I,
    IDLTEST_INDEXED_N_COLUMNS
};

#define idltest_indexed_col_i (idltest_indexed_columns[IDLTEST_INDEXED_COL_I])

extern struct ovsdb_idl_column idltest_indexed_columns[IDLTEST_INDEXED_N_COLUMNS];
bool idltest_server_has_indexed_table_col_i(const struct ovsdb_idl *); 

bool idltest_server_has_indexed_table(const struct ovsdb_idl *);
const struct idltest_indexed_table *idltest_indexed_table_get(const struct ovsdb_idl *);
const struct idltest_indexed *idltest_indexed_table_first(const struct idltest_indexed_table *);

#define IDLTEST_INDEXED_TABLE_FOR_EACH(ROW, TABLE) \
        for ((ROW) = idltest_indexed_table_first(TABLE); \
             (ROW); \
             (ROW) = idltest_indexed_next(ROW))
#define IDLTEST_INDEXED_TABLE_FOR_EACH_SAFE_LONG(ROW, NEXT, TABLE) \
        for ((ROW) = idltest_indexed_table_first(TABLE); \
             (ROW) ? ((NEXT) = idltest_indexed_next(ROW), 1) : 0; \
             (ROW) = (NEXT))
#define IDLTEST_INDEXED_TABLE_FOR_EACH_SAFE_SHORT(ROW, TABLE) \
        for (const struct idltest_indexed * ROW__next = ((ROW) = idltest_indexed_table_first(TABLE), NULL); \
             (ROW) ? (ROW__next = idltest_indexed_next(ROW), 1) : (ROW__next = NULL, 0); \
             (ROW) = ROW__next)
#define IDLTEST_INDEXED_TABLE_FOR_EACH_SAFE(...)                                        \
        OVERLOAD_SAFE_MACRO(IDLTEST_INDEXED_TABLE_FOR_EACH_SAFE_LONG,                   \
                            IDLTEST_INDEXED_TABLE_FOR_EACH_SAFE_SHORT, 3, __VA_ARGS__)


const struct idltest_indexed *idltest_indexed_get_for_uuid(const struct ovsdb_idl *, const struct uuid *);
const struct idltest_indexed *idltest_indexed_table_get_for_uuid(const struct idltest_indexed_table *, const struct uuid *);
const struct idltest_indexed *idltest_indexed_first(const struct ovsdb_idl *);
const struct idltest_indexed *idltest_indexed_next(const struct idltest_indexed *);
#define IDLTEST_INDEXED_FOR_EACH(ROW, IDL) \
        for ((ROW) = idltest_indexed_first(IDL); \
             (ROW); \
             (ROW) = idltest_indexed_next(ROW))
#define IDLTEST_INDEXED_FOR_EACH_SAFE_LONG(ROW, NEXT, IDL) \
        for ((ROW) = idltest_indexed_first(IDL); \
             (ROW) ? ((NEXT) = idltest_indexed_next(ROW), 1) : 0; \
             (ROW) = (NEXT))
#define IDLTEST_INDEXED_FOR_EACH_SAFE_SHORT(ROW, IDL) \
        for (const struct idltest_indexed * ROW__next = ((ROW) = idltest_indexed_first(IDL), NULL); \
             (ROW) ? (ROW__next = idltest_indexed_next(ROW), 1) : (ROW__next = NULL, 0); \
             (ROW) = ROW__next)
#define IDLTEST_INDEXED_FOR_EACH_SAFE(...)                                         \
        OVERLOAD_SAFE_MACRO(IDLTEST_INDEXED_FOR_EACH_SAFE_LONG,                    \
                            IDLTEST_INDEXED_FOR_EACH_SAFE_SHORT, 3, __VA_ARGS__)

unsigned int idltest_indexed_get_seqno(const struct ovsdb_idl *);
unsigned int idltest_indexed_row_get_seqno(const struct idltest_indexed *row, enum ovsdb_idl_change change);
const struct idltest_indexed *idltest_indexed_track_get_first(const struct ovsdb_idl *);
const struct idltest_indexed *idltest_indexed_track_get_next(const struct idltest_indexed *);
#define IDLTEST_INDEXED_FOR_EACH_TRACKED(ROW, IDL) \
        for ((ROW) = idltest_indexed_track_get_first(IDL); \
             (ROW); \
             (ROW) = idltest_indexed_track_get_next(ROW))

const struct idltest_indexed *idltest_indexed_table_track_get_first(const struct idltest_indexed_table *);
#define IDLTEST_INDEXED_TABLE_FOR_EACH_TRACKED(ROW, TABLE) \
        for ((ROW) = idltest_indexed_table_track_get_first(TABLE); \
             (ROW); \
             (ROW) = idltest_indexed_track_get_next(ROW))


/* Returns true if 'row' was inserted since the last change tracking reset.
 *
 * Note: This can only be used to test rows of tracked changes. This cannot be
 * used to test if an uncommitted row that has been added locally is new or it
 * may given unexpected results. */
static inline bool idltest_indexed_is_new(const struct idltest_indexed *row)
{
    return idltest_indexed_row_get_seqno(row, OVSDB_IDL_CHANGE_INSERT) > 0;
}

/* Returns true if 'row' was deleted since the last change tracking reset.
 *
 * Note: This can only be used to test rows of tracked changes. This cannot be
 * used to test if an uncommitted row that has been added locally has been
 * deleted or it may given unexpected results. */
static inline bool idltest_indexed_is_deleted(const struct idltest_indexed *row)
{
    return idltest_indexed_row_get_seqno(row, OVSDB_IDL_CHANGE_DELETE) > 0;
}

void idltest_indexed_index_destroy_row(const struct idltest_indexed *);

struct idltest_indexed *idltest_indexed_index_find(struct ovsdb_idl_index *, const struct idltest_indexed *);

int idltest_indexed_index_compare(
    struct ovsdb_idl_index *, 
    const struct idltest_indexed *, 
    const struct idltest_indexed *);
struct ovsdb_idl_cursor idltest_indexed_cursor_first(struct ovsdb_idl_index *);
struct ovsdb_idl_cursor idltest_indexed_cursor_first_eq(
    struct ovsdb_idl_index *, const struct idltest_indexed *);
struct ovsdb_idl_cursor idltest_indexed_cursor_first_ge(
    struct ovsdb_idl_index *, const struct idltest_indexed *);

struct idltest_indexed *idltest_indexed_cursor_data(struct ovsdb_idl_cursor *);

#define IDLTEST_INDEXED_FOR_EACH_RANGE(ROW, FROM, TO, INDEX) \
        for (struct ovsdb_idl_cursor cursor__ = idltest_indexed_cursor_first_ge(INDEX, FROM); \
             (cursor__.position \
              && ((ROW) = idltest_indexed_cursor_data(&cursor__), \
                  !(TO) || idltest_indexed_index_compare(INDEX, ROW, TO) <= 0)); \
             ovsdb_idl_cursor_next(&cursor__))
#define IDLTEST_INDEXED_FOR_EACH_EQUAL(ROW, KEY, INDEX) \
        for (struct ovsdb_idl_cursor cursor__ = idltest_indexed_cursor_first_eq(INDEX, KEY); \
             (cursor__.position \
              ? ((ROW) = idltest_indexed_cursor_data(&cursor__), \
                 ovsdb_idl_cursor_next_eq(&cursor__), \
                 true) \
              : false); \
            )
#define IDLTEST_INDEXED_FOR_EACH_BYINDEX(ROW, INDEX) \
        for (struct ovsdb_idl_cursor cursor__ = idltest_indexed_cursor_first(INDEX); \
             (cursor__.position \
              ? ((ROW) = idltest_indexed_cursor_data(&cursor__), \
                 ovsdb_idl_cursor_next(&cursor__), \
                 true) \
              : false); \
            )

void idltest_indexed_init(struct idltest_indexed *);
void idltest_indexed_delete(const struct idltest_indexed *);
struct idltest_indexed *idltest_indexed_insert(struct ovsdb_idl_txn *);

/* Returns true if the tracked column referenced by 'enum idltest_indexed_column_id' of
 * the row referenced by 'struct idltest_indexed *' was updated since the last change
 * tracking reset.
 *
 * Note: This can only be used to test rows of tracked changes. This cannot be
 * used to test if an uncommitted row that has been added locally has been
 * updated or it may given unexpected results. */
bool idltest_indexed_is_updated(const struct idltest_indexed *, enum idltest_indexed_column_id);

void idltest_indexed_verify_i(const struct idltest_indexed *);

const struct ovsdb_datum *idltest_indexed_get_i(const struct idltest_indexed *, enum ovsdb_atomic_type key_type);

void idltest_indexed_set_i(const struct idltest_indexed *, int64_t i);

void idltest_indexed_add_clause_i(struct ovsdb_idl_condition *, enum ovsdb_function function, int64_t i);
unsigned int idltest_indexed_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);

struct idltest_indexed *idltest_indexed_index_init_row(struct ovsdb_idl_index *);
void idltest_indexed_index_set_i(const struct idltest_indexed *,
int64_t i);

/* link1 table. */
struct idltest_link1 {
	struct ovsdb_idl_row header_;

	/* i column. */
	int64_t i;

	/* k column. */
	struct idltest_link1 *k;

	/* ka column. */
	struct idltest_link1 **ka;
	size_t n_ka;

	/* l2 column. */
	struct idltest_link2 *l2;
};

enum idltest_link1_column_id {
    IDLTEST_LINK1_COL_I,
    IDLTEST_LINK1_COL_K,
    IDLTEST_LINK1_COL_KA,
    IDLTEST_LINK1_COL_L2,
    IDLTEST_LINK1_N_COLUMNS
};

#define idltest_link1_col_i (idltest_link1_columns[IDLTEST_LINK1_COL_I])
#define idltest_link1_col_k (idltest_link1_columns[IDLTEST_LINK1_COL_K])
#define idltest_link1_col_ka (idltest_link1_columns[IDLTEST_LINK1_COL_KA])
#define idltest_link1_col_l2 (idltest_link1_columns[IDLTEST_LINK1_COL_L2])

extern struct ovsdb_idl_column idltest_link1_columns[IDLTEST_LINK1_N_COLUMNS];
bool idltest_server_has_link1_table_col_i(const struct ovsdb_idl *); 
bool idltest_server_has_link1_table_col_k(const struct ovsdb_idl *); 
bool idltest_server_has_link1_table_col_ka(const struct ovsdb_idl *); 
bool idltest_server_has_link1_table_col_l2(const struct ovsdb_idl *); 

bool idltest_server_has_link1_table(const struct ovsdb_idl *);
const struct idltest_link1_table *idltest_link1_table_get(const struct ovsdb_idl *);
const struct idltest_link1 *idltest_link1_table_first(const struct idltest_link1_table *);

#define IDLTEST_LINK1_TABLE_FOR_EACH(ROW, TABLE) \
        for ((ROW) = idltest_link1_table_first(TABLE); \
             (ROW); \
             (ROW) = idltest_link1_next(ROW))
#define IDLTEST_LINK1_TABLE_FOR_EACH_SAFE_LONG(ROW, NEXT, TABLE) \
        for ((ROW) = idltest_link1_table_first(TABLE); \
             (ROW) ? ((NEXT) = idltest_link1_next(ROW), 1) : 0; \
             (ROW) = (NEXT))
#define IDLTEST_LINK1_TABLE_FOR_EACH_SAFE_SHORT(ROW, TABLE) \
        for (const struct idltest_link1 * ROW__next = ((ROW) = idltest_link1_table_first(TABLE), NULL); \
             (ROW) ? (ROW__next = idltest_link1_next(ROW), 1) : (ROW__next = NULL, 0); \
             (ROW) = ROW__next)
#define IDLTEST_LINK1_TABLE_FOR_EACH_SAFE(...)                                        \
        OVERLOAD_SAFE_MACRO(IDLTEST_LINK1_TABLE_FOR_EACH_SAFE_LONG,                   \
                            IDLTEST_LINK1_TABLE_FOR_EACH_SAFE_SHORT, 3, __VA_ARGS__)


const struct idltest_link1 *idltest_link1_get_for_uuid(const struct ovsdb_idl *, const struct uuid *);
const struct idltest_link1 *idltest_link1_table_get_for_uuid(const struct idltest_link1_table *, const struct uuid *);
const struct idltest_link1 *idltest_link1_first(const struct ovsdb_idl *);
const struct idltest_link1 *idltest_link1_next(const struct idltest_link1 *);
#define IDLTEST_LINK1_FOR_EACH(ROW, IDL) \
        for ((ROW) = idltest_link1_first(IDL); \
             (ROW); \
             (ROW) = idltest_link1_next(ROW))
#define IDLTEST_LINK1_FOR_EACH_SAFE_LONG(ROW, NEXT, IDL) \
        for ((ROW) = idltest_link1_first(IDL); \
             (ROW) ? ((NEXT) = idltest_link1_next(ROW), 1) : 0; \
             (ROW) = (NEXT))
#define IDLTEST_LINK1_FOR_EACH_SAFE_SHORT(ROW, IDL) \
        for (const struct idltest_link1 * ROW__next = ((ROW) = idltest_link1_first(IDL), NULL); \
             (ROW) ? (ROW__next = idltest_link1_next(ROW), 1) : (ROW__next = NULL, 0); \
             (ROW) = ROW__next)
#define IDLTEST_LINK1_FOR_EACH_SAFE(...)                                         \
        OVERLOAD_SAFE_MACRO(IDLTEST_LINK1_FOR_EACH_SAFE_LONG,                    \
                            IDLTEST_LINK1_FOR_EACH_SAFE_SHORT, 3, __VA_ARGS__)

unsigned int idltest_link1_get_seqno(const struct ovsdb_idl *);
unsigned int idltest_link1_row_get_seqno(const struct idltest_link1 *row, enum ovsdb_idl_change change);
const struct idltest_link1 *idltest_link1_track_get_first(const struct ovsdb_idl *);
const struct idltest_link1 *idltest_link1_track_get_next(const struct idltest_link1 *);
#define IDLTEST_LINK1_FOR_EACH_TRACKED(ROW, IDL) \
        for ((ROW) = idltest_link1_track_get_first(IDL); \
             (ROW); \
             (ROW) = idltest_link1_track_get_next(ROW))

const struct idltest_link1 *idltest_link1_table_track_get_first(const struct idltest_link1_table *);
#define IDLTEST_LINK1_TABLE_FOR_EACH_TRACKED(ROW, TABLE) \
        for ((ROW) = idltest_link1_table_track_get_first(TABLE); \
             (ROW); \
             (ROW) = idltest_link1_track_get_next(ROW))


/* Returns true if 'row' was inserted since the last change tracking reset.
 *
 * Note: This can only be used to test rows of tracked changes. This cannot be
 * used to test if an uncommitted row that has been added locally is new or it
 * may given unexpected results. */
static inline bool idltest_link1_is_new(const struct idltest_link1 *row)
{
    return idltest_link1_row_get_seqno(row, OVSDB_IDL_CHANGE_INSERT) > 0;
}

/* Returns true if 'row' was deleted since the last change tracking reset.
 *
 * Note: This can only be used to test rows of tracked changes. This cannot be
 * used to test if an uncommitted row that has been added locally has been
 * deleted or it may given unexpected results. */
static inline bool idltest_link1_is_deleted(const struct idltest_link1 *row)
{
    return idltest_link1_row_get_seqno(row, OVSDB_IDL_CHANGE_DELETE) > 0;
}

void idltest_link1_index_destroy_row(const struct idltest_link1 *);

struct idltest_link1 *idltest_link1_index_find(struct ovsdb_idl_index *, const struct idltest_link1 *);

int idltest_link1_index_compare(
    struct ovsdb_idl_index *, 
    const struct idltest_link1 *, 
    const struct idltest_link1 *);
struct ovsdb_idl_cursor idltest_link1_cursor_first(struct ovsdb_idl_index *);
struct ovsdb_idl_cursor idltest_link1_cursor_first_eq(
    struct ovsdb_idl_index *, const struct idltest_link1 *);
struct ovsdb_idl_cursor idltest_link1_cursor_first_ge(
    struct ovsdb_idl_index *, const struct idltest_link1 *);

struct idltest_link1 *idltest_link1_cursor_data(struct ovsdb_idl_cursor *);

#define IDLTEST_LINK1_FOR_EACH_RANGE(ROW, FROM, TO, INDEX) \
        for (struct ovsdb_idl_cursor cursor__ = idltest_link1_cursor_first_ge(INDEX, FROM); \
             (cursor__.position \
              && ((ROW) = idltest_link1_cursor_data(&cursor__), \
                  !(TO) || idltest_link1_index_compare(INDEX, ROW, TO) <= 0)); \
             ovsdb_idl_cursor_next(&cursor__))
#define IDLTEST_LINK1_FOR_EACH_EQUAL(ROW, KEY, INDEX) \
        for (struct ovsdb_idl_cursor cursor__ = idltest_link1_cursor_first_eq(INDEX, KEY); \
             (cursor__.position \
              ? ((ROW) = idltest_link1_cursor_data(&cursor__), \
                 ovsdb_idl_cursor_next_eq(&cursor__), \
                 true) \
              : false); \
            )
#define IDLTEST_LINK1_FOR_EACH_BYINDEX(ROW, INDEX) \
        for (struct ovsdb_idl_cursor cursor__ = idltest_link1_cursor_first(INDEX); \
             (cursor__.position \
              ? ((ROW) = idltest_link1_cursor_data(&cursor__), \
                 ovsdb_idl_cursor_next(&cursor__), \
                 true) \
              : false); \
            )

void idltest_link1_init(struct idltest_link1 *);
void idltest_link1_delete(const struct idltest_link1 *);
struct idltest_link1 *idltest_link1_insert(struct ovsdb_idl_txn *);

/* Returns true if the tracked column referenced by 'enum idltest_link1_column_id' of
 * the row referenced by 'struct idltest_link1 *' was updated since the last change
 * tracking reset.
 *
 * Note: This can only be used to test rows of tracked changes. This cannot be
 * used to test if an uncommitted row that has been added locally has been
 * updated or it may given unexpected results. */
bool idltest_link1_is_updated(const struct idltest_link1 *, enum idltest_link1_column_id);

void idltest_link1_verify_i(const struct idltest_link1 *);
void idltest_link1_verify_k(const struct idltest_link1 *);
void idltest_link1_verify_ka(const struct idltest_link1 *);
void idltest_link1_verify_l2(const struct idltest_link1 *);

const struct ovsdb_datum *idltest_link1_get_i(const struct idltest_link1 *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *idltest_link1_get_k(const struct idltest_link1 *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *idltest_link1_get_ka(const struct idltest_link1 *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *idltest_link1_get_l2(const struct idltest_link1 *, enum ovsdb_atomic_type key_type);

void idltest_link1_set_i(const struct idltest_link1 *, int64_t i);
void idltest_link1_set_k(const struct idltest_link1 *, const struct idltest_link1 *k);
void idltest_link1_set_ka(const struct idltest_link1 *, struct idltest_link1 **ka, size_t n_ka);
void idltest_link1_set_l2(const struct idltest_link1 *, const struct idltest_link2 *l2);

void idltest_link1_add_clause_i(struct ovsdb_idl_condition *, enum ovsdb_function function, int64_t i);
unsigned int idltest_link1_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void idltest_link1_add_clause_k(struct ovsdb_idl_condition *, enum ovsdb_function function, const struct uuid *k);
unsigned int idltest_link1_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void idltest_link1_update_ka_addvalue(const struct idltest_link1 *,  const struct idltest_link1 *);
void idltest_link1_update_ka_delvalue(const struct idltest_link1 *,  const struct idltest_link1 *);
void idltest_link1_add_clause_ka(struct ovsdb_idl_condition *, enum ovsdb_function function, struct uuid **ka, size_t n_ka);
unsigned int idltest_link1_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void idltest_link1_update_l2_addvalue(const struct idltest_link1 *,  const struct idltest_link2 *);
void idltest_link1_update_l2_delvalue(const struct idltest_link1 *,  const struct idltest_link2 *);
void idltest_link1_add_clause_l2(struct ovsdb_idl_condition *, enum ovsdb_function function, const struct uuid *l2);
unsigned int idltest_link1_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);

struct idltest_link1 *idltest_link1_index_init_row(struct ovsdb_idl_index *);
void idltest_link1_index_set_i(const struct idltest_link1 *,
int64_t i);
void idltest_link1_index_set_k(const struct idltest_link1 *,
const struct idltest_link1 *k);
void idltest_link1_index_set_ka(const struct idltest_link1 *,
struct idltest_link1 **ka, size_t n_ka);
void idltest_link1_index_set_l2(const struct idltest_link1 *,
const struct idltest_link2 *l2);

/* link2 table. */
struct idltest_link2 {
	struct ovsdb_idl_row header_;

	/* i column. */
	int64_t i;

	/* l1 column. */
	struct idltest_link1 *l1;
};

enum idltest_link2_column_id {
    IDLTEST_LINK2_COL_I,
    IDLTEST_LINK2_COL_L1,
    IDLTEST_LINK2_N_COLUMNS
};

#define idltest_link2_col_i (idltest_link2_columns[IDLTEST_LINK2_COL_I])
#define idltest_link2_col_l1 (idltest_link2_columns[IDLTEST_LINK2_COL_L1])

extern struct ovsdb_idl_column idltest_link2_columns[IDLTEST_LINK2_N_COLUMNS];
bool idltest_server_has_link2_table_col_i(const struct ovsdb_idl *); 
bool idltest_server_has_link2_table_col_l1(const struct ovsdb_idl *); 

bool idltest_server_has_link2_table(const struct ovsdb_idl *);
const struct idltest_link2_table *idltest_link2_table_get(const struct ovsdb_idl *);
const struct idltest_link2 *idltest_link2_table_first(const struct idltest_link2_table *);

#define IDLTEST_LINK2_TABLE_FOR_EACH(ROW, TABLE) \
        for ((ROW) = idltest_link2_table_first(TABLE); \
             (ROW); \
             (ROW) = idltest_link2_next(ROW))
#define IDLTEST_LINK2_TABLE_FOR_EACH_SAFE_LONG(ROW, NEXT, TABLE) \
        for ((ROW) = idltest_link2_table_first(TABLE); \
             (ROW) ? ((NEXT) = idltest_link2_next(ROW), 1) : 0; \
             (ROW) = (NEXT))
#define IDLTEST_LINK2_TABLE_FOR_EACH_SAFE_SHORT(ROW, TABLE) \
        for (const struct idltest_link2 * ROW__next = ((ROW) = idltest_link2_table_first(TABLE), NULL); \
             (ROW) ? (ROW__next = idltest_link2_next(ROW), 1) : (ROW__next = NULL, 0); \
             (ROW) = ROW__next)
#define IDLTEST_LINK2_TABLE_FOR_EACH_SAFE(...)                                        \
        OVERLOAD_SAFE_MACRO(IDLTEST_LINK2_TABLE_FOR_EACH_SAFE_LONG,                   \
                            IDLTEST_LINK2_TABLE_FOR_EACH_SAFE_SHORT, 3, __VA_ARGS__)


const struct idltest_link2 *idltest_link2_get_for_uuid(const struct ovsdb_idl *, const struct uuid *);
const struct idltest_link2 *idltest_link2_table_get_for_uuid(const struct idltest_link2_table *, const struct uuid *);
const struct idltest_link2 *idltest_link2_first(const struct ovsdb_idl *);
const struct idltest_link2 *idltest_link2_next(const struct idltest_link2 *);
#define IDLTEST_LINK2_FOR_EACH(ROW, IDL) \
        for ((ROW) = idltest_link2_first(IDL); \
             (ROW); \
             (ROW) = idltest_link2_next(ROW))
#define IDLTEST_LINK2_FOR_EACH_SAFE_LONG(ROW, NEXT, IDL) \
        for ((ROW) = idltest_link2_first(IDL); \
             (ROW) ? ((NEXT) = idltest_link2_next(ROW), 1) : 0; \
             (ROW) = (NEXT))
#define IDLTEST_LINK2_FOR_EACH_SAFE_SHORT(ROW, IDL) \
        for (const struct idltest_link2 * ROW__next = ((ROW) = idltest_link2_first(IDL), NULL); \
             (ROW) ? (ROW__next = idltest_link2_next(ROW), 1) : (ROW__next = NULL, 0); \
             (ROW) = ROW__next)
#define IDLTEST_LINK2_FOR_EACH_SAFE(...)                                         \
        OVERLOAD_SAFE_MACRO(IDLTEST_LINK2_FOR_EACH_SAFE_LONG,                    \
                            IDLTEST_LINK2_FOR_EACH_SAFE_SHORT, 3, __VA_ARGS__)

unsigned int idltest_link2_get_seqno(const struct ovsdb_idl *);
unsigned int idltest_link2_row_get_seqno(const struct idltest_link2 *row, enum ovsdb_idl_change change);
const struct idltest_link2 *idltest_link2_track_get_first(const struct ovsdb_idl *);
const struct idltest_link2 *idltest_link2_track_get_next(const struct idltest_link2 *);
#define IDLTEST_LINK2_FOR_EACH_TRACKED(ROW, IDL) \
        for ((ROW) = idltest_link2_track_get_first(IDL); \
             (ROW); \
             (ROW) = idltest_link2_track_get_next(ROW))

const struct idltest_link2 *idltest_link2_table_track_get_first(const struct idltest_link2_table *);
#define IDLTEST_LINK2_TABLE_FOR_EACH_TRACKED(ROW, TABLE) \
        for ((ROW) = idltest_link2_table_track_get_first(TABLE); \
             (ROW); \
             (ROW) = idltest_link2_track_get_next(ROW))


/* Returns true if 'row' was inserted since the last change tracking reset.
 *
 * Note: This can only be used to test rows of tracked changes. This cannot be
 * used to test if an uncommitted row that has been added locally is new or it
 * may given unexpected results. */
static inline bool idltest_link2_is_new(const struct idltest_link2 *row)
{
    return idltest_link2_row_get_seqno(row, OVSDB_IDL_CHANGE_INSERT) > 0;
}

/* Returns true if 'row' was deleted since the last change tracking reset.
 *
 * Note: This can only be used to test rows of tracked changes. This cannot be
 * used to test if an uncommitted row that has been added locally has been
 * deleted or it may given unexpected results. */
static inline bool idltest_link2_is_deleted(const struct idltest_link2 *row)
{
    return idltest_link2_row_get_seqno(row, OVSDB_IDL_CHANGE_DELETE) > 0;
}

void idltest_link2_index_destroy_row(const struct idltest_link2 *);

struct idltest_link2 *idltest_link2_index_find(struct ovsdb_idl_index *, const struct idltest_link2 *);

int idltest_link2_index_compare(
    struct ovsdb_idl_index *, 
    const struct idltest_link2 *, 
    const struct idltest_link2 *);
struct ovsdb_idl_cursor idltest_link2_cursor_first(struct ovsdb_idl_index *);
struct ovsdb_idl_cursor idltest_link2_cursor_first_eq(
    struct ovsdb_idl_index *, const struct idltest_link2 *);
struct ovsdb_idl_cursor idltest_link2_cursor_first_ge(
    struct ovsdb_idl_index *, const struct idltest_link2 *);

struct idltest_link2 *idltest_link2_cursor_data(struct ovsdb_idl_cursor *);

#define IDLTEST_LINK2_FOR_EACH_RANGE(ROW, FROM, TO, INDEX) \
        for (struct ovsdb_idl_cursor cursor__ = idltest_link2_cursor_first_ge(INDEX, FROM); \
             (cursor__.position \
              && ((ROW) = idltest_link2_cursor_data(&cursor__), \
                  !(TO) || idltest_link2_index_compare(INDEX, ROW, TO) <= 0)); \
             ovsdb_idl_cursor_next(&cursor__))
#define IDLTEST_LINK2_FOR_EACH_EQUAL(ROW, KEY, INDEX) \
        for (struct ovsdb_idl_cursor cursor__ = idltest_link2_cursor_first_eq(INDEX, KEY); \
             (cursor__.position \
              ? ((ROW) = idltest_link2_cursor_data(&cursor__), \
                 ovsdb_idl_cursor_next_eq(&cursor__), \
                 true) \
              : false); \
            )
#define IDLTEST_LINK2_FOR_EACH_BYINDEX(ROW, INDEX) \
        for (struct ovsdb_idl_cursor cursor__ = idltest_link2_cursor_first(INDEX); \
             (cursor__.position \
              ? ((ROW) = idltest_link2_cursor_data(&cursor__), \
                 ovsdb_idl_cursor_next(&cursor__), \
                 true) \
              : false); \
            )

void idltest_link2_init(struct idltest_link2 *);
void idltest_link2_delete(const struct idltest_link2 *);
struct idltest_link2 *idltest_link2_insert(struct ovsdb_idl_txn *);

/* Returns true if the tracked column referenced by 'enum idltest_link2_column_id' of
 * the row referenced by 'struct idltest_link2 *' was updated since the last change
 * tracking reset.
 *
 * Note: This can only be used to test rows of tracked changes. This cannot be
 * used to test if an uncommitted row that has been added locally has been
 * updated or it may given unexpected results. */
bool idltest_link2_is_updated(const struct idltest_link2 *, enum idltest_link2_column_id);

void idltest_link2_verify_i(const struct idltest_link2 *);
void idltest_link2_verify_l1(const struct idltest_link2 *);

const struct ovsdb_datum *idltest_link2_get_i(const struct idltest_link2 *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *idltest_link2_get_l1(const struct idltest_link2 *, enum ovsdb_atomic_type key_type);

void idltest_link2_set_i(const struct idltest_link2 *, int64_t i);
void idltest_link2_set_l1(const struct idltest_link2 *, const struct idltest_link1 *l1);

void idltest_link2_add_clause_i(struct ovsdb_idl_condition *, enum ovsdb_function function, int64_t i);
unsigned int idltest_link2_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void idltest_link2_update_l1_addvalue(const struct idltest_link2 *,  const struct idltest_link1 *);
void idltest_link2_update_l1_delvalue(const struct idltest_link2 *,  const struct idltest_link1 *);
void idltest_link2_add_clause_l1(struct ovsdb_idl_condition *, enum ovsdb_function function, const struct uuid *l1);
unsigned int idltest_link2_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);

struct idltest_link2 *idltest_link2_index_init_row(struct ovsdb_idl_index *);
void idltest_link2_index_set_i(const struct idltest_link2 *,
int64_t i);
void idltest_link2_index_set_l1(const struct idltest_link2 *,
const struct idltest_link1 *l1);

/* simple table. */
struct idltest_simple {
	struct ovsdb_idl_row header_;

	/* b column. */
	bool b;

	/* ba column. */
	bool *ba;
	size_t n_ba;

	/* i column. */
	int64_t i;

	/* ia column. */
	int64_t *ia;
	size_t n_ia;

	/* r column. */
	double r;

	/* ra column. */
	double *ra;
	size_t n_ra;

	/* s column. */
	char *s;	/* Always nonnull. */

	/* sa column. */
	char **sa;
	size_t n_sa;

	/* u column. */
	struct uuid u;

	/* ua column. */
	struct uuid *ua;
	size_t n_ua;
};

enum idltest_simple_column_id {
    IDLTEST_SIMPLE_COL_B,
    IDLTEST_SIMPLE_COL_BA,
    IDLTEST_SIMPLE_COL_I,
    IDLTEST_SIMPLE_COL_IA,
    IDLTEST_SIMPLE_COL_R,
    IDLTEST_SIMPLE_COL_RA,
    IDLTEST_SIMPLE_COL_S,
    IDLTEST_SIMPLE_COL_SA,
    IDLTEST_SIMPLE_COL_U,
    IDLTEST_SIMPLE_COL_UA,
    IDLTEST_SIMPLE_N_COLUMNS
};

#define idltest_simple_col_b (idltest_simple_columns[IDLTEST_SIMPLE_COL_B])
#define idltest_simple_col_ba (idltest_simple_columns[IDLTEST_SIMPLE_COL_BA])
#define idltest_simple_col_i (idltest_simple_columns[IDLTEST_SIMPLE_COL_I])
#define idltest_simple_col_ia (idltest_simple_columns[IDLTEST_SIMPLE_COL_IA])
#define idltest_simple_col_r (idltest_simple_columns[IDLTEST_SIMPLE_COL_R])
#define idltest_simple_col_ra (idltest_simple_columns[IDLTEST_SIMPLE_COL_RA])
#define idltest_simple_col_s (idltest_simple_columns[IDLTEST_SIMPLE_COL_S])
#define idltest_simple_col_sa (idltest_simple_columns[IDLTEST_SIMPLE_COL_SA])
#define idltest_simple_col_u (idltest_simple_columns[IDLTEST_SIMPLE_COL_U])
#define idltest_simple_col_ua (idltest_simple_columns[IDLTEST_SIMPLE_COL_UA])

extern struct ovsdb_idl_column idltest_simple_columns[IDLTEST_SIMPLE_N_COLUMNS];
bool idltest_server_has_simple_table_col_b(const struct ovsdb_idl *); 
bool idltest_server_has_simple_table_col_ba(const struct ovsdb_idl *); 
bool idltest_server_has_simple_table_col_i(const struct ovsdb_idl *); 
bool idltest_server_has_simple_table_col_ia(const struct ovsdb_idl *); 
bool idltest_server_has_simple_table_col_r(const struct ovsdb_idl *); 
bool idltest_server_has_simple_table_col_ra(const struct ovsdb_idl *); 
bool idltest_server_has_simple_table_col_s(const struct ovsdb_idl *); 
bool idltest_server_has_simple_table_col_sa(const struct ovsdb_idl *); 
bool idltest_server_has_simple_table_col_u(const struct ovsdb_idl *); 
bool idltest_server_has_simple_table_col_ua(const struct ovsdb_idl *); 

bool idltest_server_has_simple_table(const struct ovsdb_idl *);
const struct idltest_simple_table *idltest_simple_table_get(const struct ovsdb_idl *);
const struct idltest_simple *idltest_simple_table_first(const struct idltest_simple_table *);

#define IDLTEST_SIMPLE_TABLE_FOR_EACH(ROW, TABLE) \
        for ((ROW) = idltest_simple_table_first(TABLE); \
             (ROW); \
             (ROW) = idltest_simple_next(ROW))
#define IDLTEST_SIMPLE_TABLE_FOR_EACH_SAFE_LONG(ROW, NEXT, TABLE) \
        for ((ROW) = idltest_simple_table_first(TABLE); \
             (ROW) ? ((NEXT) = idltest_simple_next(ROW), 1) : 0; \
             (ROW) = (NEXT))
#define IDLTEST_SIMPLE_TABLE_FOR_EACH_SAFE_SHORT(ROW, TABLE) \
        for (const struct idltest_simple * ROW__next = ((ROW) = idltest_simple_table_first(TABLE), NULL); \
             (ROW) ? (ROW__next = idltest_simple_next(ROW), 1) : (ROW__next = NULL, 0); \
             (ROW) = ROW__next)
#define IDLTEST_SIMPLE_TABLE_FOR_EACH_SAFE(...)                                        \
        OVERLOAD_SAFE_MACRO(IDLTEST_SIMPLE_TABLE_FOR_EACH_SAFE_LONG,                   \
                            IDLTEST_SIMPLE_TABLE_FOR_EACH_SAFE_SHORT, 3, __VA_ARGS__)


const struct idltest_simple *idltest_simple_get_for_uuid(const struct ovsdb_idl *, const struct uuid *);
const struct idltest_simple *idltest_simple_table_get_for_uuid(const struct idltest_simple_table *, const struct uuid *);
const struct idltest_simple *idltest_simple_first(const struct ovsdb_idl *);
const struct idltest_simple *idltest_simple_next(const struct idltest_simple *);
#define IDLTEST_SIMPLE_FOR_EACH(ROW, IDL) \
        for ((ROW) = idltest_simple_first(IDL); \
             (ROW); \
             (ROW) = idltest_simple_next(ROW))
#define IDLTEST_SIMPLE_FOR_EACH_SAFE_LONG(ROW, NEXT, IDL) \
        for ((ROW) = idltest_simple_first(IDL); \
             (ROW) ? ((NEXT) = idltest_simple_next(ROW), 1) : 0; \
             (ROW) = (NEXT))
#define IDLTEST_SIMPLE_FOR_EACH_SAFE_SHORT(ROW, IDL) \
        for (const struct idltest_simple * ROW__next = ((ROW) = idltest_simple_first(IDL), NULL); \
             (ROW) ? (ROW__next = idltest_simple_next(ROW), 1) : (ROW__next = NULL, 0); \
             (ROW) = ROW__next)
#define IDLTEST_SIMPLE_FOR_EACH_SAFE(...)                                         \
        OVERLOAD_SAFE_MACRO(IDLTEST_SIMPLE_FOR_EACH_SAFE_LONG,                    \
                            IDLTEST_SIMPLE_FOR_EACH_SAFE_SHORT, 3, __VA_ARGS__)

unsigned int idltest_simple_get_seqno(const struct ovsdb_idl *);
unsigned int idltest_simple_row_get_seqno(const struct idltest_simple *row, enum ovsdb_idl_change change);
const struct idltest_simple *idltest_simple_track_get_first(const struct ovsdb_idl *);
const struct idltest_simple *idltest_simple_track_get_next(const struct idltest_simple *);
#define IDLTEST_SIMPLE_FOR_EACH_TRACKED(ROW, IDL) \
        for ((ROW) = idltest_simple_track_get_first(IDL); \
             (ROW); \
             (ROW) = idltest_simple_track_get_next(ROW))

const struct idltest_simple *idltest_simple_table_track_get_first(const struct idltest_simple_table *);
#define IDLTEST_SIMPLE_TABLE_FOR_EACH_TRACKED(ROW, TABLE) \
        for ((ROW) = idltest_simple_table_track_get_first(TABLE); \
             (ROW); \
             (ROW) = idltest_simple_track_get_next(ROW))


/* Returns true if 'row' was inserted since the last change tracking reset.
 *
 * Note: This can only be used to test rows of tracked changes. This cannot be
 * used to test if an uncommitted row that has been added locally is new or it
 * may given unexpected results. */
static inline bool idltest_simple_is_new(const struct idltest_simple *row)
{
    return idltest_simple_row_get_seqno(row, OVSDB_IDL_CHANGE_INSERT) > 0;
}

/* Returns true if 'row' was deleted since the last change tracking reset.
 *
 * Note: This can only be used to test rows of tracked changes. This cannot be
 * used to test if an uncommitted row that has been added locally has been
 * deleted or it may given unexpected results. */
static inline bool idltest_simple_is_deleted(const struct idltest_simple *row)
{
    return idltest_simple_row_get_seqno(row, OVSDB_IDL_CHANGE_DELETE) > 0;
}

void idltest_simple_index_destroy_row(const struct idltest_simple *);

struct idltest_simple *idltest_simple_index_find(struct ovsdb_idl_index *, const struct idltest_simple *);

int idltest_simple_index_compare(
    struct ovsdb_idl_index *, 
    const struct idltest_simple *, 
    const struct idltest_simple *);
struct ovsdb_idl_cursor idltest_simple_cursor_first(struct ovsdb_idl_index *);
struct ovsdb_idl_cursor idltest_simple_cursor_first_eq(
    struct ovsdb_idl_index *, const struct idltest_simple *);
struct ovsdb_idl_cursor idltest_simple_cursor_first_ge(
    struct ovsdb_idl_index *, const struct idltest_simple *);

struct idltest_simple *idltest_simple_cursor_data(struct ovsdb_idl_cursor *);

#define IDLTEST_SIMPLE_FOR_EACH_RANGE(ROW, FROM, TO, INDEX) \
        for (struct ovsdb_idl_cursor cursor__ = idltest_simple_cursor_first_ge(INDEX, FROM); \
             (cursor__.position \
              && ((ROW) = idltest_simple_cursor_data(&cursor__), \
                  !(TO) || idltest_simple_index_compare(INDEX, ROW, TO) <= 0)); \
             ovsdb_idl_cursor_next(&cursor__))
#define IDLTEST_SIMPLE_FOR_EACH_EQUAL(ROW, KEY, INDEX) \
        for (struct ovsdb_idl_cursor cursor__ = idltest_simple_cursor_first_eq(INDEX, KEY); \
             (cursor__.position \
              ? ((ROW) = idltest_simple_cursor_data(&cursor__), \
                 ovsdb_idl_cursor_next_eq(&cursor__), \
                 true) \
              : false); \
            )
#define IDLTEST_SIMPLE_FOR_EACH_BYINDEX(ROW, INDEX) \
        for (struct ovsdb_idl_cursor cursor__ = idltest_simple_cursor_first(INDEX); \
             (cursor__.position \
              ? ((ROW) = idltest_simple_cursor_data(&cursor__), \
                 ovsdb_idl_cursor_next(&cursor__), \
                 true) \
              : false); \
            )

void idltest_simple_init(struct idltest_simple *);
void idltest_simple_delete(const struct idltest_simple *);
struct idltest_simple *idltest_simple_insert(struct ovsdb_idl_txn *);

/* Returns true if the tracked column referenced by 'enum idltest_simple_column_id' of
 * the row referenced by 'struct idltest_simple *' was updated since the last change
 * tracking reset.
 *
 * Note: This can only be used to test rows of tracked changes. This cannot be
 * used to test if an uncommitted row that has been added locally has been
 * updated or it may given unexpected results. */
bool idltest_simple_is_updated(const struct idltest_simple *, enum idltest_simple_column_id);

void idltest_simple_verify_b(const struct idltest_simple *);
void idltest_simple_verify_ba(const struct idltest_simple *);
void idltest_simple_verify_i(const struct idltest_simple *);
void idltest_simple_verify_ia(const struct idltest_simple *);
void idltest_simple_verify_r(const struct idltest_simple *);
void idltest_simple_verify_ra(const struct idltest_simple *);
void idltest_simple_verify_s(const struct idltest_simple *);
void idltest_simple_verify_sa(const struct idltest_simple *);
void idltest_simple_verify_u(const struct idltest_simple *);
void idltest_simple_verify_ua(const struct idltest_simple *);

const struct ovsdb_datum *idltest_simple_get_b(const struct idltest_simple *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *idltest_simple_get_ba(const struct idltest_simple *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *idltest_simple_get_i(const struct idltest_simple *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *idltest_simple_get_ia(const struct idltest_simple *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *idltest_simple_get_r(const struct idltest_simple *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *idltest_simple_get_ra(const struct idltest_simple *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *idltest_simple_get_s(const struct idltest_simple *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *idltest_simple_get_sa(const struct idltest_simple *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *idltest_simple_get_u(const struct idltest_simple *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *idltest_simple_get_ua(const struct idltest_simple *, enum ovsdb_atomic_type key_type);

void idltest_simple_set_b(const struct idltest_simple *, bool b);
void idltest_simple_set_ba(const struct idltest_simple *, const bool *ba, size_t n_ba);
void idltest_simple_set_i(const struct idltest_simple *, int64_t i);
void idltest_simple_set_ia(const struct idltest_simple *, const int64_t *ia, size_t n_ia);
void idltest_simple_set_r(const struct idltest_simple *, double r);
void idltest_simple_set_ra(const struct idltest_simple *, const double *ra, size_t n_ra);
void idltest_simple_set_s(const struct idltest_simple *, const char *s);
void idltest_simple_set_sa(const struct idltest_simple *, const char **sa, size_t n_sa);
void idltest_simple_set_u(const struct idltest_simple *, struct uuid u);
void idltest_simple_set_ua(const struct idltest_simple *, const struct uuid *ua, size_t n_ua);

void idltest_simple_add_clause_b(struct ovsdb_idl_condition *, enum ovsdb_function function, bool b);
unsigned int idltest_simple_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void idltest_simple_update_ba_addvalue(const struct idltest_simple *,  bool );
void idltest_simple_update_ba_delvalue(const struct idltest_simple *,  bool );
void idltest_simple_add_clause_ba(struct ovsdb_idl_condition *, enum ovsdb_function function, const bool *ba, size_t n_ba);
unsigned int idltest_simple_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void idltest_simple_add_clause_i(struct ovsdb_idl_condition *, enum ovsdb_function function, int64_t i);
unsigned int idltest_simple_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void idltest_simple_update_ia_addvalue(const struct idltest_simple *,  int64_t );
void idltest_simple_update_ia_delvalue(const struct idltest_simple *,  int64_t );
void idltest_simple_add_clause_ia(struct ovsdb_idl_condition *, enum ovsdb_function function, const int64_t *ia, size_t n_ia);
unsigned int idltest_simple_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void idltest_simple_add_clause_r(struct ovsdb_idl_condition *, enum ovsdb_function function, double r);
unsigned int idltest_simple_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void idltest_simple_update_ra_addvalue(const struct idltest_simple *,  double );
void idltest_simple_update_ra_delvalue(const struct idltest_simple *,  double );
void idltest_simple_add_clause_ra(struct ovsdb_idl_condition *, enum ovsdb_function function, const double *ra, size_t n_ra);
unsigned int idltest_simple_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void idltest_simple_add_clause_s(struct ovsdb_idl_condition *, enum ovsdb_function function, const char *s);
unsigned int idltest_simple_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void idltest_simple_update_sa_addvalue(const struct idltest_simple *,  const char *);
void idltest_simple_update_sa_delvalue(const struct idltest_simple *,  const char *);
void idltest_simple_add_clause_sa(struct ovsdb_idl_condition *, enum ovsdb_function function, const char **sa, size_t n_sa);
unsigned int idltest_simple_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void idltest_simple_add_clause_u(struct ovsdb_idl_condition *, enum ovsdb_function function, struct uuid u);
unsigned int idltest_simple_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void idltest_simple_update_ua_addvalue(const struct idltest_simple *,  struct uuid );
void idltest_simple_update_ua_delvalue(const struct idltest_simple *,  struct uuid );
void idltest_simple_add_clause_ua(struct ovsdb_idl_condition *, enum ovsdb_function function, const struct uuid *ua, size_t n_ua);
unsigned int idltest_simple_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);

struct idltest_simple *idltest_simple_index_init_row(struct ovsdb_idl_index *);
void idltest_simple_index_set_b(const struct idltest_simple *,
bool b);
void idltest_simple_index_set_ba(const struct idltest_simple *,
const bool *ba, size_t n_ba);
void idltest_simple_index_set_i(const struct idltest_simple *,
int64_t i);
void idltest_simple_index_set_ia(const struct idltest_simple *,
const int64_t *ia, size_t n_ia);
void idltest_simple_index_set_r(const struct idltest_simple *,
double r);
void idltest_simple_index_set_ra(const struct idltest_simple *,
const double *ra, size_t n_ra);
void idltest_simple_index_set_s(const struct idltest_simple *,
const char *s);
void idltest_simple_index_set_sa(const struct idltest_simple *,
const char **sa, size_t n_sa);
void idltest_simple_index_set_u(const struct idltest_simple *,
struct uuid u);
void idltest_simple_index_set_ua(const struct idltest_simple *,
const struct uuid *ua, size_t n_ua);

/* simple2 table. */
struct idltest_simple2 {
	struct ovsdb_idl_row header_;

	/* imap column. */
	int64_t *key_imap;
	char **value_imap;
	size_t n_imap;

	/* name column. */
	char *name;	/* Always nonnull. */

	/* smap column. */
	struct smap smap;
};

enum idltest_simple2_column_id {
    IDLTEST_SIMPLE2_COL_IMAP,
    IDLTEST_SIMPLE2_COL_NAME,
    IDLTEST_SIMPLE2_COL_SMAP,
    IDLTEST_SIMPLE2_N_COLUMNS
};

#define idltest_simple2_col_imap (idltest_simple2_columns[IDLTEST_SIMPLE2_COL_IMAP])
#define idltest_simple2_col_name (idltest_simple2_columns[IDLTEST_SIMPLE2_COL_NAME])
#define idltest_simple2_col_smap (idltest_simple2_columns[IDLTEST_SIMPLE2_COL_SMAP])

extern struct ovsdb_idl_column idltest_simple2_columns[IDLTEST_SIMPLE2_N_COLUMNS];
bool idltest_server_has_simple2_table_col_imap(const struct ovsdb_idl *); 
bool idltest_server_has_simple2_table_col_name(const struct ovsdb_idl *); 
bool idltest_server_has_simple2_table_col_smap(const struct ovsdb_idl *); 

bool idltest_server_has_simple2_table(const struct ovsdb_idl *);
const struct idltest_simple2_table *idltest_simple2_table_get(const struct ovsdb_idl *);
const struct idltest_simple2 *idltest_simple2_table_first(const struct idltest_simple2_table *);

#define IDLTEST_SIMPLE2_TABLE_FOR_EACH(ROW, TABLE) \
        for ((ROW) = idltest_simple2_table_first(TABLE); \
             (ROW); \
             (ROW) = idltest_simple2_next(ROW))
#define IDLTEST_SIMPLE2_TABLE_FOR_EACH_SAFE_LONG(ROW, NEXT, TABLE) \
        for ((ROW) = idltest_simple2_table_first(TABLE); \
             (ROW) ? ((NEXT) = idltest_simple2_next(ROW), 1) : 0; \
             (ROW) = (NEXT))
#define IDLTEST_SIMPLE2_TABLE_FOR_EACH_SAFE_SHORT(ROW, TABLE) \
        for (const struct idltest_simple2 * ROW__next = ((ROW) = idltest_simple2_table_first(TABLE), NULL); \
             (ROW) ? (ROW__next = idltest_simple2_next(ROW), 1) : (ROW__next = NULL, 0); \
             (ROW) = ROW__next)
#define IDLTEST_SIMPLE2_TABLE_FOR_EACH_SAFE(...)                                        \
        OVERLOAD_SAFE_MACRO(IDLTEST_SIMPLE2_TABLE_FOR_EACH_SAFE_LONG,                   \
                            IDLTEST_SIMPLE2_TABLE_FOR_EACH_SAFE_SHORT, 3, __VA_ARGS__)


const struct idltest_simple2 *idltest_simple2_get_for_uuid(const struct ovsdb_idl *, const struct uuid *);
const struct idltest_simple2 *idltest_simple2_table_get_for_uuid(const struct idltest_simple2_table *, const struct uuid *);
const struct idltest_simple2 *idltest_simple2_first(const struct ovsdb_idl *);
const struct idltest_simple2 *idltest_simple2_next(const struct idltest_simple2 *);
#define IDLTEST_SIMPLE2_FOR_EACH(ROW, IDL) \
        for ((ROW) = idltest_simple2_first(IDL); \
             (ROW); \
             (ROW) = idltest_simple2_next(ROW))
#define IDLTEST_SIMPLE2_FOR_EACH_SAFE_LONG(ROW, NEXT, IDL) \
        for ((ROW) = idltest_simple2_first(IDL); \
             (ROW) ? ((NEXT) = idltest_simple2_next(ROW), 1) : 0; \
             (ROW) = (NEXT))
#define IDLTEST_SIMPLE2_FOR_EACH_SAFE_SHORT(ROW, IDL) \
        for (const struct idltest_simple2 * ROW__next = ((ROW) = idltest_simple2_first(IDL), NULL); \
             (ROW) ? (ROW__next = idltest_simple2_next(ROW), 1) : (ROW__next = NULL, 0); \
             (ROW) = ROW__next)
#define IDLTEST_SIMPLE2_FOR_EACH_SAFE(...)                                         \
        OVERLOAD_SAFE_MACRO(IDLTEST_SIMPLE2_FOR_EACH_SAFE_LONG,                    \
                            IDLTEST_SIMPLE2_FOR_EACH_SAFE_SHORT, 3, __VA_ARGS__)

unsigned int idltest_simple2_get_seqno(const struct ovsdb_idl *);
unsigned int idltest_simple2_row_get_seqno(const struct idltest_simple2 *row, enum ovsdb_idl_change change);
const struct idltest_simple2 *idltest_simple2_track_get_first(const struct ovsdb_idl *);
const struct idltest_simple2 *idltest_simple2_track_get_next(const struct idltest_simple2 *);
#define IDLTEST_SIMPLE2_FOR_EACH_TRACKED(ROW, IDL) \
        for ((ROW) = idltest_simple2_track_get_first(IDL); \
             (ROW); \
             (ROW) = idltest_simple2_track_get_next(ROW))

const struct idltest_simple2 *idltest_simple2_table_track_get_first(const struct idltest_simple2_table *);
#define IDLTEST_SIMPLE2_TABLE_FOR_EACH_TRACKED(ROW, TABLE) \
        for ((ROW) = idltest_simple2_table_track_get_first(TABLE); \
             (ROW); \
             (ROW) = idltest_simple2_track_get_next(ROW))


/* Returns true if 'row' was inserted since the last change tracking reset.
 *
 * Note: This can only be used to test rows of tracked changes. This cannot be
 * used to test if an uncommitted row that has been added locally is new or it
 * may given unexpected results. */
static inline bool idltest_simple2_is_new(const struct idltest_simple2 *row)
{
    return idltest_simple2_row_get_seqno(row, OVSDB_IDL_CHANGE_INSERT) > 0;
}

/* Returns true if 'row' was deleted since the last change tracking reset.
 *
 * Note: This can only be used to test rows of tracked changes. This cannot be
 * used to test if an uncommitted row that has been added locally has been
 * deleted or it may given unexpected results. */
static inline bool idltest_simple2_is_deleted(const struct idltest_simple2 *row)
{
    return idltest_simple2_row_get_seqno(row, OVSDB_IDL_CHANGE_DELETE) > 0;
}

void idltest_simple2_index_destroy_row(const struct idltest_simple2 *);

struct idltest_simple2 *idltest_simple2_index_find(struct ovsdb_idl_index *, const struct idltest_simple2 *);

int idltest_simple2_index_compare(
    struct ovsdb_idl_index *, 
    const struct idltest_simple2 *, 
    const struct idltest_simple2 *);
struct ovsdb_idl_cursor idltest_simple2_cursor_first(struct ovsdb_idl_index *);
struct ovsdb_idl_cursor idltest_simple2_cursor_first_eq(
    struct ovsdb_idl_index *, const struct idltest_simple2 *);
struct ovsdb_idl_cursor idltest_simple2_cursor_first_ge(
    struct ovsdb_idl_index *, const struct idltest_simple2 *);

struct idltest_simple2 *idltest_simple2_cursor_data(struct ovsdb_idl_cursor *);

#define IDLTEST_SIMPLE2_FOR_EACH_RANGE(ROW, FROM, TO, INDEX) \
        for (struct ovsdb_idl_cursor cursor__ = idltest_simple2_cursor_first_ge(INDEX, FROM); \
             (cursor__.position \
              && ((ROW) = idltest_simple2_cursor_data(&cursor__), \
                  !(TO) || idltest_simple2_index_compare(INDEX, ROW, TO) <= 0)); \
             ovsdb_idl_cursor_next(&cursor__))
#define IDLTEST_SIMPLE2_FOR_EACH_EQUAL(ROW, KEY, INDEX) \
        for (struct ovsdb_idl_cursor cursor__ = idltest_simple2_cursor_first_eq(INDEX, KEY); \
             (cursor__.position \
              ? ((ROW) = idltest_simple2_cursor_data(&cursor__), \
                 ovsdb_idl_cursor_next_eq(&cursor__), \
                 true) \
              : false); \
            )
#define IDLTEST_SIMPLE2_FOR_EACH_BYINDEX(ROW, INDEX) \
        for (struct ovsdb_idl_cursor cursor__ = idltest_simple2_cursor_first(INDEX); \
             (cursor__.position \
              ? ((ROW) = idltest_simple2_cursor_data(&cursor__), \
                 ovsdb_idl_cursor_next(&cursor__), \
                 true) \
              : false); \
            )

void idltest_simple2_init(struct idltest_simple2 *);
void idltest_simple2_delete(const struct idltest_simple2 *);
struct idltest_simple2 *idltest_simple2_insert(struct ovsdb_idl_txn *);

/* Returns true if the tracked column referenced by 'enum idltest_simple2_column_id' of
 * the row referenced by 'struct idltest_simple2 *' was updated since the last change
 * tracking reset.
 *
 * Note: This can only be used to test rows of tracked changes. This cannot be
 * used to test if an uncommitted row that has been added locally has been
 * updated or it may given unexpected results. */
bool idltest_simple2_is_updated(const struct idltest_simple2 *, enum idltest_simple2_column_id);

void idltest_simple2_verify_imap(const struct idltest_simple2 *);
void idltest_simple2_verify_name(const struct idltest_simple2 *);
void idltest_simple2_verify_smap(const struct idltest_simple2 *);

const struct ovsdb_datum *idltest_simple2_get_imap(const struct idltest_simple2 *, enum ovsdb_atomic_type key_type, enum ovsdb_atomic_type value_type);
const struct ovsdb_datum *idltest_simple2_get_name(const struct idltest_simple2 *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *idltest_simple2_get_smap(const struct idltest_simple2 *, enum ovsdb_atomic_type key_type, enum ovsdb_atomic_type value_type);

void idltest_simple2_set_imap(const struct idltest_simple2 *, const int64_t *key_imap, const char **value_imap, size_t n_imap);
void idltest_simple2_set_name(const struct idltest_simple2 *, const char *name);
void idltest_simple2_set_smap(const struct idltest_simple2 *, const struct smap *);

void idltest_simple2_update_imap_setkey(const struct idltest_simple2 *,  int64_t , const char *);
void idltest_simple2_update_imap_delkey(const struct idltest_simple2 *,  int64_t );
void idltest_simple2_add_clause_imap(struct ovsdb_idl_condition *, enum ovsdb_function function, const int64_t *key_imap, const char **value_imap, size_t n_imap);
unsigned int idltest_simple2_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void idltest_simple2_add_clause_name(struct ovsdb_idl_condition *, enum ovsdb_function function, const char *name);
unsigned int idltest_simple2_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void idltest_simple2_update_smap_setkey(const struct idltest_simple2 *,  const char *, const char *);
void idltest_simple2_update_smap_delkey(const struct idltest_simple2 *,  const char *);
void idltest_simple2_add_clause_smap(struct ovsdb_idl_condition *, enum ovsdb_function function, const struct smap *);
unsigned int idltest_simple2_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);

struct idltest_simple2 *idltest_simple2_index_init_row(struct ovsdb_idl_index *);
void idltest_simple2_index_set_imap(const struct idltest_simple2 *,
const int64_t *key_imap, const char **value_imap, size_t n_imap);
void idltest_simple2_index_set_name(const struct idltest_simple2 *,
const char *name);
void idltest_simple2_index_set_smap(const struct idltest_simple2 *,
const struct smap *);

/* simple3 table. */
struct idltest_simple3 {
	struct ovsdb_idl_row header_;

	/* name column. */
	char *name;	/* Always nonnull. */

	/* uref column. */
	struct idltest_simple4 **uref;
	size_t n_uref;

	/* uset column. */
	struct uuid *uset;
	size_t n_uset;
};

enum idltest_simple3_column_id {
    IDLTEST_SIMPLE3_COL_NAME,
    IDLTEST_SIMPLE3_COL_UREF,
    IDLTEST_SIMPLE3_COL_USET,
    IDLTEST_SIMPLE3_N_COLUMNS
};

#define idltest_simple3_col_name (idltest_simple3_columns[IDLTEST_SIMPLE3_COL_NAME])
#define idltest_simple3_col_uref (idltest_simple3_columns[IDLTEST_SIMPLE3_COL_UREF])
#define idltest_simple3_col_uset (idltest_simple3_columns[IDLTEST_SIMPLE3_COL_USET])

extern struct ovsdb_idl_column idltest_simple3_columns[IDLTEST_SIMPLE3_N_COLUMNS];
bool idltest_server_has_simple3_table_col_name(const struct ovsdb_idl *); 
bool idltest_server_has_simple3_table_col_uref(const struct ovsdb_idl *); 
bool idltest_server_has_simple3_table_col_uset(const struct ovsdb_idl *); 

bool idltest_server_has_simple3_table(const struct ovsdb_idl *);
const struct idltest_simple3_table *idltest_simple3_table_get(const struct ovsdb_idl *);
const struct idltest_simple3 *idltest_simple3_table_first(const struct idltest_simple3_table *);

#define IDLTEST_SIMPLE3_TABLE_FOR_EACH(ROW, TABLE) \
        for ((ROW) = idltest_simple3_table_first(TABLE); \
             (ROW); \
             (ROW) = idltest_simple3_next(ROW))
#define IDLTEST_SIMPLE3_TABLE_FOR_EACH_SAFE_LONG(ROW, NEXT, TABLE) \
        for ((ROW) = idltest_simple3_table_first(TABLE); \
             (ROW) ? ((NEXT) = idltest_simple3_next(ROW), 1) : 0; \
             (ROW) = (NEXT))
#define IDLTEST_SIMPLE3_TABLE_FOR_EACH_SAFE_SHORT(ROW, TABLE) \
        for (const struct idltest_simple3 * ROW__next = ((ROW) = idltest_simple3_table_first(TABLE), NULL); \
             (ROW) ? (ROW__next = idltest_simple3_next(ROW), 1) : (ROW__next = NULL, 0); \
             (ROW) = ROW__next)
#define IDLTEST_SIMPLE3_TABLE_FOR_EACH_SAFE(...)                                        \
        OVERLOAD_SAFE_MACRO(IDLTEST_SIMPLE3_TABLE_FOR_EACH_SAFE_LONG,                   \
                            IDLTEST_SIMPLE3_TABLE_FOR_EACH_SAFE_SHORT, 3, __VA_ARGS__)


const struct idltest_simple3 *idltest_simple3_get_for_uuid(const struct ovsdb_idl *, const struct uuid *);
const struct idltest_simple3 *idltest_simple3_table_get_for_uuid(const struct idltest_simple3_table *, const struct uuid *);
const struct idltest_simple3 *idltest_simple3_first(const struct ovsdb_idl *);
const struct idltest_simple3 *idltest_simple3_next(const struct idltest_simple3 *);
#define IDLTEST_SIMPLE3_FOR_EACH(ROW, IDL) \
        for ((ROW) = idltest_simple3_first(IDL); \
             (ROW); \
             (ROW) = idltest_simple3_next(ROW))
#define IDLTEST_SIMPLE3_FOR_EACH_SAFE_LONG(ROW, NEXT, IDL) \
        for ((ROW) = idltest_simple3_first(IDL); \
             (ROW) ? ((NEXT) = idltest_simple3_next(ROW), 1) : 0; \
             (ROW) = (NEXT))
#define IDLTEST_SIMPLE3_FOR_EACH_SAFE_SHORT(ROW, IDL) \
        for (const struct idltest_simple3 * ROW__next = ((ROW) = idltest_simple3_first(IDL), NULL); \
             (ROW) ? (ROW__next = idltest_simple3_next(ROW), 1) : (ROW__next = NULL, 0); \
             (ROW) = ROW__next)
#define IDLTEST_SIMPLE3_FOR_EACH_SAFE(...)                                         \
        OVERLOAD_SAFE_MACRO(IDLTEST_SIMPLE3_FOR_EACH_SAFE_LONG,                    \
                            IDLTEST_SIMPLE3_FOR_EACH_SAFE_SHORT, 3, __VA_ARGS__)

unsigned int idltest_simple3_get_seqno(const struct ovsdb_idl *);
unsigned int idltest_simple3_row_get_seqno(const struct idltest_simple3 *row, enum ovsdb_idl_change change);
const struct idltest_simple3 *idltest_simple3_track_get_first(const struct ovsdb_idl *);
const struct idltest_simple3 *idltest_simple3_track_get_next(const struct idltest_simple3 *);
#define IDLTEST_SIMPLE3_FOR_EACH_TRACKED(ROW, IDL) \
        for ((ROW) = idltest_simple3_track_get_first(IDL); \
             (ROW); \
             (ROW) = idltest_simple3_track_get_next(ROW))

const struct idltest_simple3 *idltest_simple3_table_track_get_first(const struct idltest_simple3_table *);
#define IDLTEST_SIMPLE3_TABLE_FOR_EACH_TRACKED(ROW, TABLE) \
        for ((ROW) = idltest_simple3_table_track_get_first(TABLE); \
             (ROW); \
             (ROW) = idltest_simple3_track_get_next(ROW))


/* Returns true if 'row' was inserted since the last change tracking reset.
 *
 * Note: This can only be used to test rows of tracked changes. This cannot be
 * used to test if an uncommitted row that has been added locally is new or it
 * may given unexpected results. */
static inline bool idltest_simple3_is_new(const struct idltest_simple3 *row)
{
    return idltest_simple3_row_get_seqno(row, OVSDB_IDL_CHANGE_INSERT) > 0;
}

/* Returns true if 'row' was deleted since the last change tracking reset.
 *
 * Note: This can only be used to test rows of tracked changes. This cannot be
 * used to test if an uncommitted row that has been added locally has been
 * deleted or it may given unexpected results. */
static inline bool idltest_simple3_is_deleted(const struct idltest_simple3 *row)
{
    return idltest_simple3_row_get_seqno(row, OVSDB_IDL_CHANGE_DELETE) > 0;
}

void idltest_simple3_index_destroy_row(const struct idltest_simple3 *);

struct idltest_simple3 *idltest_simple3_index_find(struct ovsdb_idl_index *, const struct idltest_simple3 *);

int idltest_simple3_index_compare(
    struct ovsdb_idl_index *, 
    const struct idltest_simple3 *, 
    const struct idltest_simple3 *);
struct ovsdb_idl_cursor idltest_simple3_cursor_first(struct ovsdb_idl_index *);
struct ovsdb_idl_cursor idltest_simple3_cursor_first_eq(
    struct ovsdb_idl_index *, const struct idltest_simple3 *);
struct ovsdb_idl_cursor idltest_simple3_cursor_first_ge(
    struct ovsdb_idl_index *, const struct idltest_simple3 *);

struct idltest_simple3 *idltest_simple3_cursor_data(struct ovsdb_idl_cursor *);

#define IDLTEST_SIMPLE3_FOR_EACH_RANGE(ROW, FROM, TO, INDEX) \
        for (struct ovsdb_idl_cursor cursor__ = idltest_simple3_cursor_first_ge(INDEX, FROM); \
             (cursor__.position \
              && ((ROW) = idltest_simple3_cursor_data(&cursor__), \
                  !(TO) || idltest_simple3_index_compare(INDEX, ROW, TO) <= 0)); \
             ovsdb_idl_cursor_next(&cursor__))
#define IDLTEST_SIMPLE3_FOR_EACH_EQUAL(ROW, KEY, INDEX) \
        for (struct ovsdb_idl_cursor cursor__ = idltest_simple3_cursor_first_eq(INDEX, KEY); \
             (cursor__.position \
              ? ((ROW) = idltest_simple3_cursor_data(&cursor__), \
                 ovsdb_idl_cursor_next_eq(&cursor__), \
                 true) \
              : false); \
            )
#define IDLTEST_SIMPLE3_FOR_EACH_BYINDEX(ROW, INDEX) \
        for (struct ovsdb_idl_cursor cursor__ = idltest_simple3_cursor_first(INDEX); \
             (cursor__.position \
              ? ((ROW) = idltest_simple3_cursor_data(&cursor__), \
                 ovsdb_idl_cursor_next(&cursor__), \
                 true) \
              : false); \
            )

void idltest_simple3_init(struct idltest_simple3 *);
void idltest_simple3_delete(const struct idltest_simple3 *);
struct idltest_simple3 *idltest_simple3_insert(struct ovsdb_idl_txn *);

/* Returns true if the tracked column referenced by 'enum idltest_simple3_column_id' of
 * the row referenced by 'struct idltest_simple3 *' was updated since the last change
 * tracking reset.
 *
 * Note: This can only be used to test rows of tracked changes. This cannot be
 * used to test if an uncommitted row that has been added locally has been
 * updated or it may given unexpected results. */
bool idltest_simple3_is_updated(const struct idltest_simple3 *, enum idltest_simple3_column_id);

void idltest_simple3_verify_name(const struct idltest_simple3 *);
void idltest_simple3_verify_uref(const struct idltest_simple3 *);
void idltest_simple3_verify_uset(const struct idltest_simple3 *);

const struct ovsdb_datum *idltest_simple3_get_name(const struct idltest_simple3 *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *idltest_simple3_get_uref(const struct idltest_simple3 *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *idltest_simple3_get_uset(const struct idltest_simple3 *, enum ovsdb_atomic_type key_type);

void idltest_simple3_set_name(const struct idltest_simple3 *, const char *name);
void idltest_simple3_set_uref(const struct idltest_simple3 *, struct idltest_simple4 **uref, size_t n_uref);
void idltest_simple3_set_uset(const struct idltest_simple3 *, const struct uuid *uset, size_t n_uset);

void idltest_simple3_add_clause_name(struct ovsdb_idl_condition *, enum ovsdb_function function, const char *name);
unsigned int idltest_simple3_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void idltest_simple3_update_uref_addvalue(const struct idltest_simple3 *,  const struct idltest_simple4 *);
void idltest_simple3_update_uref_delvalue(const struct idltest_simple3 *,  const struct idltest_simple4 *);
void idltest_simple3_add_clause_uref(struct ovsdb_idl_condition *, enum ovsdb_function function, struct uuid **uref, size_t n_uref);
unsigned int idltest_simple3_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void idltest_simple3_update_uset_addvalue(const struct idltest_simple3 *,  struct uuid );
void idltest_simple3_update_uset_delvalue(const struct idltest_simple3 *,  struct uuid );
void idltest_simple3_add_clause_uset(struct ovsdb_idl_condition *, enum ovsdb_function function, const struct uuid *uset, size_t n_uset);
unsigned int idltest_simple3_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);

struct idltest_simple3 *idltest_simple3_index_init_row(struct ovsdb_idl_index *);
void idltest_simple3_index_set_name(const struct idltest_simple3 *,
const char *name);
void idltest_simple3_index_set_uref(const struct idltest_simple3 *,
struct idltest_simple4 **uref, size_t n_uref);
void idltest_simple3_index_set_uset(const struct idltest_simple3 *,
const struct uuid *uset, size_t n_uset);

/* simple4 table. */
struct idltest_simple4 {
	struct ovsdb_idl_row header_;

	/* name column. */
	char *name;	/* Always nonnull. */
};

enum idltest_simple4_column_id {
    IDLTEST_SIMPLE4_COL_NAME,
    IDLTEST_SIMPLE4_N_COLUMNS
};

#define idltest_simple4_col_name (idltest_simple4_columns[IDLTEST_SIMPLE4_COL_NAME])

extern struct ovsdb_idl_column idltest_simple4_columns[IDLTEST_SIMPLE4_N_COLUMNS];
bool idltest_server_has_simple4_table_col_name(const struct ovsdb_idl *); 

bool idltest_server_has_simple4_table(const struct ovsdb_idl *);
const struct idltest_simple4_table *idltest_simple4_table_get(const struct ovsdb_idl *);
const struct idltest_simple4 *idltest_simple4_table_first(const struct idltest_simple4_table *);

#define IDLTEST_SIMPLE4_TABLE_FOR_EACH(ROW, TABLE) \
        for ((ROW) = idltest_simple4_table_first(TABLE); \
             (ROW); \
             (ROW) = idltest_simple4_next(ROW))
#define IDLTEST_SIMPLE4_TABLE_FOR_EACH_SAFE_LONG(ROW, NEXT, TABLE) \
        for ((ROW) = idltest_simple4_table_first(TABLE); \
             (ROW) ? ((NEXT) = idltest_simple4_next(ROW), 1) : 0; \
             (ROW) = (NEXT))
#define IDLTEST_SIMPLE4_TABLE_FOR_EACH_SAFE_SHORT(ROW, TABLE) \
        for (const struct idltest_simple4 * ROW__next = ((ROW) = idltest_simple4_table_first(TABLE), NULL); \
             (ROW) ? (ROW__next = idltest_simple4_next(ROW), 1) : (ROW__next = NULL, 0); \
             (ROW) = ROW__next)
#define IDLTEST_SIMPLE4_TABLE_FOR_EACH_SAFE(...)                                        \
        OVERLOAD_SAFE_MACRO(IDLTEST_SIMPLE4_TABLE_FOR_EACH_SAFE_LONG,                   \
                            IDLTEST_SIMPLE4_TABLE_FOR_EACH_SAFE_SHORT, 3, __VA_ARGS__)


const struct idltest_simple4 *idltest_simple4_get_for_uuid(const struct ovsdb_idl *, const struct uuid *);
const struct idltest_simple4 *idltest_simple4_table_get_for_uuid(const struct idltest_simple4_table *, const struct uuid *);
const struct idltest_simple4 *idltest_simple4_first(const struct ovsdb_idl *);
const struct idltest_simple4 *idltest_simple4_next(const struct idltest_simple4 *);
#define IDLTEST_SIMPLE4_FOR_EACH(ROW, IDL) \
        for ((ROW) = idltest_simple4_first(IDL); \
             (ROW); \
             (ROW) = idltest_simple4_next(ROW))
#define IDLTEST_SIMPLE4_FOR_EACH_SAFE_LONG(ROW, NEXT, IDL) \
        for ((ROW) = idltest_simple4_first(IDL); \
             (ROW) ? ((NEXT) = idltest_simple4_next(ROW), 1) : 0; \
             (ROW) = (NEXT))
#define IDLTEST_SIMPLE4_FOR_EACH_SAFE_SHORT(ROW, IDL) \
        for (const struct idltest_simple4 * ROW__next = ((ROW) = idltest_simple4_first(IDL), NULL); \
             (ROW) ? (ROW__next = idltest_simple4_next(ROW), 1) : (ROW__next = NULL, 0); \
             (ROW) = ROW__next)
#define IDLTEST_SIMPLE4_FOR_EACH_SAFE(...)                                         \
        OVERLOAD_SAFE_MACRO(IDLTEST_SIMPLE4_FOR_EACH_SAFE_LONG,                    \
                            IDLTEST_SIMPLE4_FOR_EACH_SAFE_SHORT, 3, __VA_ARGS__)

unsigned int idltest_simple4_get_seqno(const struct ovsdb_idl *);
unsigned int idltest_simple4_row_get_seqno(const struct idltest_simple4 *row, enum ovsdb_idl_change change);
const struct idltest_simple4 *idltest_simple4_track_get_first(const struct ovsdb_idl *);
const struct idltest_simple4 *idltest_simple4_track_get_next(const struct idltest_simple4 *);
#define IDLTEST_SIMPLE4_FOR_EACH_TRACKED(ROW, IDL) \
        for ((ROW) = idltest_simple4_track_get_first(IDL); \
             (ROW); \
             (ROW) = idltest_simple4_track_get_next(ROW))

const struct idltest_simple4 *idltest_simple4_table_track_get_first(const struct idltest_simple4_table *);
#define IDLTEST_SIMPLE4_TABLE_FOR_EACH_TRACKED(ROW, TABLE) \
        for ((ROW) = idltest_simple4_table_track_get_first(TABLE); \
             (ROW); \
             (ROW) = idltest_simple4_track_get_next(ROW))


/* Returns true if 'row' was inserted since the last change tracking reset.
 *
 * Note: This can only be used to test rows of tracked changes. This cannot be
 * used to test if an uncommitted row that has been added locally is new or it
 * may given unexpected results. */
static inline bool idltest_simple4_is_new(const struct idltest_simple4 *row)
{
    return idltest_simple4_row_get_seqno(row, OVSDB_IDL_CHANGE_INSERT) > 0;
}

/* Returns true if 'row' was deleted since the last change tracking reset.
 *
 * Note: This can only be used to test rows of tracked changes. This cannot be
 * used to test if an uncommitted row that has been added locally has been
 * deleted or it may given unexpected results. */
static inline bool idltest_simple4_is_deleted(const struct idltest_simple4 *row)
{
    return idltest_simple4_row_get_seqno(row, OVSDB_IDL_CHANGE_DELETE) > 0;
}

void idltest_simple4_index_destroy_row(const struct idltest_simple4 *);

struct idltest_simple4 *idltest_simple4_index_find(struct ovsdb_idl_index *, const struct idltest_simple4 *);

int idltest_simple4_index_compare(
    struct ovsdb_idl_index *, 
    const struct idltest_simple4 *, 
    const struct idltest_simple4 *);
struct ovsdb_idl_cursor idltest_simple4_cursor_first(struct ovsdb_idl_index *);
struct ovsdb_idl_cursor idltest_simple4_cursor_first_eq(
    struct ovsdb_idl_index *, const struct idltest_simple4 *);
struct ovsdb_idl_cursor idltest_simple4_cursor_first_ge(
    struct ovsdb_idl_index *, const struct idltest_simple4 *);

struct idltest_simple4 *idltest_simple4_cursor_data(struct ovsdb_idl_cursor *);

#define IDLTEST_SIMPLE4_FOR_EACH_RANGE(ROW, FROM, TO, INDEX) \
        for (struct ovsdb_idl_cursor cursor__ = idltest_simple4_cursor_first_ge(INDEX, FROM); \
             (cursor__.position \
              && ((ROW) = idltest_simple4_cursor_data(&cursor__), \
                  !(TO) || idltest_simple4_index_compare(INDEX, ROW, TO) <= 0)); \
             ovsdb_idl_cursor_next(&cursor__))
#define IDLTEST_SIMPLE4_FOR_EACH_EQUAL(ROW, KEY, INDEX) \
        for (struct ovsdb_idl_cursor cursor__ = idltest_simple4_cursor_first_eq(INDEX, KEY); \
             (cursor__.position \
              ? ((ROW) = idltest_simple4_cursor_data(&cursor__), \
                 ovsdb_idl_cursor_next_eq(&cursor__), \
                 true) \
              : false); \
            )
#define IDLTEST_SIMPLE4_FOR_EACH_BYINDEX(ROW, INDEX) \
        for (struct ovsdb_idl_cursor cursor__ = idltest_simple4_cursor_first(INDEX); \
             (cursor__.position \
              ? ((ROW) = idltest_simple4_cursor_data(&cursor__), \
                 ovsdb_idl_cursor_next(&cursor__), \
                 true) \
              : false); \
            )

void idltest_simple4_init(struct idltest_simple4 *);
void idltest_simple4_delete(const struct idltest_simple4 *);
struct idltest_simple4 *idltest_simple4_insert(struct ovsdb_idl_txn *);

/* Returns true if the tracked column referenced by 'enum idltest_simple4_column_id' of
 * the row referenced by 'struct idltest_simple4 *' was updated since the last change
 * tracking reset.
 *
 * Note: This can only be used to test rows of tracked changes. This cannot be
 * used to test if an uncommitted row that has been added locally has been
 * updated or it may given unexpected results. */
bool idltest_simple4_is_updated(const struct idltest_simple4 *, enum idltest_simple4_column_id);

void idltest_simple4_verify_name(const struct idltest_simple4 *);

const struct ovsdb_datum *idltest_simple4_get_name(const struct idltest_simple4 *, enum ovsdb_atomic_type key_type);

void idltest_simple4_set_name(const struct idltest_simple4 *, const char *name);

void idltest_simple4_add_clause_name(struct ovsdb_idl_condition *, enum ovsdb_function function, const char *name);
unsigned int idltest_simple4_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);

struct idltest_simple4 *idltest_simple4_index_init_row(struct ovsdb_idl_index *);
void idltest_simple4_index_set_name(const struct idltest_simple4 *,
const char *name);

/* simple5 table. */
struct idltest_simple5 {
	struct ovsdb_idl_row header_;

	/* irefmap column. */
	int64_t *key_irefmap;
	struct idltest_simple3 **value_irefmap;
	size_t n_irefmap;

	/* name column. */
	char *name;	/* Always nonnull. */
};

enum idltest_simple5_column_id {
    IDLTEST_SIMPLE5_COL_IREFMAP,
    IDLTEST_SIMPLE5_COL_NAME,
    IDLTEST_SIMPLE5_N_COLUMNS
};

#define idltest_simple5_col_irefmap (idltest_simple5_columns[IDLTEST_SIMPLE5_COL_IREFMAP])
#define idltest_simple5_col_name (idltest_simple5_columns[IDLTEST_SIMPLE5_COL_NAME])

extern struct ovsdb_idl_column idltest_simple5_columns[IDLTEST_SIMPLE5_N_COLUMNS];
bool idltest_server_has_simple5_table_col_irefmap(const struct ovsdb_idl *); 
bool idltest_server_has_simple5_table_col_name(const struct ovsdb_idl *); 

bool idltest_server_has_simple5_table(const struct ovsdb_idl *);
const struct idltest_simple5_table *idltest_simple5_table_get(const struct ovsdb_idl *);
const struct idltest_simple5 *idltest_simple5_table_first(const struct idltest_simple5_table *);

#define IDLTEST_SIMPLE5_TABLE_FOR_EACH(ROW, TABLE) \
        for ((ROW) = idltest_simple5_table_first(TABLE); \
             (ROW); \
             (ROW) = idltest_simple5_next(ROW))
#define IDLTEST_SIMPLE5_TABLE_FOR_EACH_SAFE_LONG(ROW, NEXT, TABLE) \
        for ((ROW) = idltest_simple5_table_first(TABLE); \
             (ROW) ? ((NEXT) = idltest_simple5_next(ROW), 1) : 0; \
             (ROW) = (NEXT))
#define IDLTEST_SIMPLE5_TABLE_FOR_EACH_SAFE_SHORT(ROW, TABLE) \
        for (const struct idltest_simple5 * ROW__next = ((ROW) = idltest_simple5_table_first(TABLE), NULL); \
             (ROW) ? (ROW__next = idltest_simple5_next(ROW), 1) : (ROW__next = NULL, 0); \
             (ROW) = ROW__next)
#define IDLTEST_SIMPLE5_TABLE_FOR_EACH_SAFE(...)                                        \
        OVERLOAD_SAFE_MACRO(IDLTEST_SIMPLE5_TABLE_FOR_EACH_SAFE_LONG,                   \
                            IDLTEST_SIMPLE5_TABLE_FOR_EACH_SAFE_SHORT, 3, __VA_ARGS__)


const struct idltest_simple5 *idltest_simple5_get_for_uuid(const struct ovsdb_idl *, const struct uuid *);
const struct idltest_simple5 *idltest_simple5_table_get_for_uuid(const struct idltest_simple5_table *, const struct uuid *);
const struct idltest_simple5 *idltest_simple5_first(const struct ovsdb_idl *);
const struct idltest_simple5 *idltest_simple5_next(const struct idltest_simple5 *);
#define IDLTEST_SIMPLE5_FOR_EACH(ROW, IDL) \
        for ((ROW) = idltest_simple5_first(IDL); \
             (ROW); \
             (ROW) = idltest_simple5_next(ROW))
#define IDLTEST_SIMPLE5_FOR_EACH_SAFE_LONG(ROW, NEXT, IDL) \
        for ((ROW) = idltest_simple5_first(IDL); \
             (ROW) ? ((NEXT) = idltest_simple5_next(ROW), 1) : 0; \
             (ROW) = (NEXT))
#define IDLTEST_SIMPLE5_FOR_EACH_SAFE_SHORT(ROW, IDL) \
        for (const struct idltest_simple5 * ROW__next = ((ROW) = idltest_simple5_first(IDL), NULL); \
             (ROW) ? (ROW__next = idltest_simple5_next(ROW), 1) : (ROW__next = NULL, 0); \
             (ROW) = ROW__next)
#define IDLTEST_SIMPLE5_FOR_EACH_SAFE(...)                                         \
        OVERLOAD_SAFE_MACRO(IDLTEST_SIMPLE5_FOR_EACH_SAFE_LONG,                    \
                            IDLTEST_SIMPLE5_FOR_EACH_SAFE_SHORT, 3, __VA_ARGS__)

unsigned int idltest_simple5_get_seqno(const struct ovsdb_idl *);
unsigned int idltest_simple5_row_get_seqno(const struct idltest_simple5 *row, enum ovsdb_idl_change change);
const struct idltest_simple5 *idltest_simple5_track_get_first(const struct ovsdb_idl *);
const struct idltest_simple5 *idltest_simple5_track_get_next(const struct idltest_simple5 *);
#define IDLTEST_SIMPLE5_FOR_EACH_TRACKED(ROW, IDL) \
        for ((ROW) = idltest_simple5_track_get_first(IDL); \
             (ROW); \
             (ROW) = idltest_simple5_track_get_next(ROW))

const struct idltest_simple5 *idltest_simple5_table_track_get_first(const struct idltest_simple5_table *);
#define IDLTEST_SIMPLE5_TABLE_FOR_EACH_TRACKED(ROW, TABLE) \
        for ((ROW) = idltest_simple5_table_track_get_first(TABLE); \
             (ROW); \
             (ROW) = idltest_simple5_track_get_next(ROW))


/* Returns true if 'row' was inserted since the last change tracking reset.
 *
 * Note: This can only be used to test rows of tracked changes. This cannot be
 * used to test if an uncommitted row that has been added locally is new or it
 * may given unexpected results. */
static inline bool idltest_simple5_is_new(const struct idltest_simple5 *row)
{
    return idltest_simple5_row_get_seqno(row, OVSDB_IDL_CHANGE_INSERT) > 0;
}

/* Returns true if 'row' was deleted since the last change tracking reset.
 *
 * Note: This can only be used to test rows of tracked changes. This cannot be
 * used to test if an uncommitted row that has been added locally has been
 * deleted or it may given unexpected results. */
static inline bool idltest_simple5_is_deleted(const struct idltest_simple5 *row)
{
    return idltest_simple5_row_get_seqno(row, OVSDB_IDL_CHANGE_DELETE) > 0;
}

void idltest_simple5_index_destroy_row(const struct idltest_simple5 *);

struct idltest_simple5 *idltest_simple5_index_find(struct ovsdb_idl_index *, const struct idltest_simple5 *);

int idltest_simple5_index_compare(
    struct ovsdb_idl_index *, 
    const struct idltest_simple5 *, 
    const struct idltest_simple5 *);
struct ovsdb_idl_cursor idltest_simple5_cursor_first(struct ovsdb_idl_index *);
struct ovsdb_idl_cursor idltest_simple5_cursor_first_eq(
    struct ovsdb_idl_index *, const struct idltest_simple5 *);
struct ovsdb_idl_cursor idltest_simple5_cursor_first_ge(
    struct ovsdb_idl_index *, const struct idltest_simple5 *);

struct idltest_simple5 *idltest_simple5_cursor_data(struct ovsdb_idl_cursor *);

#define IDLTEST_SIMPLE5_FOR_EACH_RANGE(ROW, FROM, TO, INDEX) \
        for (struct ovsdb_idl_cursor cursor__ = idltest_simple5_cursor_first_ge(INDEX, FROM); \
             (cursor__.position \
              && ((ROW) = idltest_simple5_cursor_data(&cursor__), \
                  !(TO) || idltest_simple5_index_compare(INDEX, ROW, TO) <= 0)); \
             ovsdb_idl_cursor_next(&cursor__))
#define IDLTEST_SIMPLE5_FOR_EACH_EQUAL(ROW, KEY, INDEX) \
        for (struct ovsdb_idl_cursor cursor__ = idltest_simple5_cursor_first_eq(INDEX, KEY); \
             (cursor__.position \
              ? ((ROW) = idltest_simple5_cursor_data(&cursor__), \
                 ovsdb_idl_cursor_next_eq(&cursor__), \
                 true) \
              : false); \
            )
#define IDLTEST_SIMPLE5_FOR_EACH_BYINDEX(ROW, INDEX) \
        for (struct ovsdb_idl_cursor cursor__ = idltest_simple5_cursor_first(INDEX); \
             (cursor__.position \
              ? ((ROW) = idltest_simple5_cursor_data(&cursor__), \
                 ovsdb_idl_cursor_next(&cursor__), \
                 true) \
              : false); \
            )

void idltest_simple5_init(struct idltest_simple5 *);
void idltest_simple5_delete(const struct idltest_simple5 *);
struct idltest_simple5 *idltest_simple5_insert(struct ovsdb_idl_txn *);

/* Returns true if the tracked column referenced by 'enum idltest_simple5_column_id' of
 * the row referenced by 'struct idltest_simple5 *' was updated since the last change
 * tracking reset.
 *
 * Note: This can only be used to test rows of tracked changes. This cannot be
 * used to test if an uncommitted row that has been added locally has been
 * updated or it may given unexpected results. */
bool idltest_simple5_is_updated(const struct idltest_simple5 *, enum idltest_simple5_column_id);

void idltest_simple5_verify_irefmap(const struct idltest_simple5 *);
void idltest_simple5_verify_name(const struct idltest_simple5 *);

const struct ovsdb_datum *idltest_simple5_get_irefmap(const struct idltest_simple5 *, enum ovsdb_atomic_type key_type, enum ovsdb_atomic_type value_type);
const struct ovsdb_datum *idltest_simple5_get_name(const struct idltest_simple5 *, enum ovsdb_atomic_type key_type);

void idltest_simple5_set_irefmap(const struct idltest_simple5 *, const int64_t *key_irefmap, struct idltest_simple3 **value_irefmap, size_t n_irefmap);
void idltest_simple5_set_name(const struct idltest_simple5 *, const char *name);

void idltest_simple5_update_irefmap_setkey(const struct idltest_simple5 *,  int64_t , const struct idltest_simple3 *);
void idltest_simple5_update_irefmap_delkey(const struct idltest_simple5 *,  int64_t );
void idltest_simple5_add_clause_irefmap(struct ovsdb_idl_condition *, enum ovsdb_function function, const int64_t *key_irefmap, struct uuid **value_irefmap, size_t n_irefmap);
unsigned int idltest_simple5_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void idltest_simple5_add_clause_name(struct ovsdb_idl_condition *, enum ovsdb_function function, const char *name);
unsigned int idltest_simple5_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);

struct idltest_simple5 *idltest_simple5_index_init_row(struct ovsdb_idl_index *);
void idltest_simple5_index_set_irefmap(const struct idltest_simple5 *,
const int64_t *key_irefmap, struct idltest_simple3 **value_irefmap, size_t n_irefmap);
void idltest_simple5_index_set_name(const struct idltest_simple5 *,
const char *name);

/* simple6 table. */
struct idltest_simple6 {
	struct ovsdb_idl_row header_;

	/* name column. */
	char *name;	/* Always nonnull. */

	/* weak_ref column. */
	struct idltest_simple **weak_ref;
	size_t n_weak_ref;
};

enum idltest_simple6_column_id {
    IDLTEST_SIMPLE6_COL_NAME,
    IDLTEST_SIMPLE6_COL_WEAK_REF,
    IDLTEST_SIMPLE6_N_COLUMNS
};

#define idltest_simple6_col_name (idltest_simple6_columns[IDLTEST_SIMPLE6_COL_NAME])
#define idltest_simple6_col_weak_ref (idltest_simple6_columns[IDLTEST_SIMPLE6_COL_WEAK_REF])

extern struct ovsdb_idl_column idltest_simple6_columns[IDLTEST_SIMPLE6_N_COLUMNS];
bool idltest_server_has_simple6_table_col_name(const struct ovsdb_idl *); 
bool idltest_server_has_simple6_table_col_weak_ref(const struct ovsdb_idl *); 

bool idltest_server_has_simple6_table(const struct ovsdb_idl *);
const struct idltest_simple6_table *idltest_simple6_table_get(const struct ovsdb_idl *);
const struct idltest_simple6 *idltest_simple6_table_first(const struct idltest_simple6_table *);

#define IDLTEST_SIMPLE6_TABLE_FOR_EACH(ROW, TABLE) \
        for ((ROW) = idltest_simple6_table_first(TABLE); \
             (ROW); \
             (ROW) = idltest_simple6_next(ROW))
#define IDLTEST_SIMPLE6_TABLE_FOR_EACH_SAFE_LONG(ROW, NEXT, TABLE) \
        for ((ROW) = idltest_simple6_table_first(TABLE); \
             (ROW) ? ((NEXT) = idltest_simple6_next(ROW), 1) : 0; \
             (ROW) = (NEXT))
#define IDLTEST_SIMPLE6_TABLE_FOR_EACH_SAFE_SHORT(ROW, TABLE) \
        for (const struct idltest_simple6 * ROW__next = ((ROW) = idltest_simple6_table_first(TABLE), NULL); \
             (ROW) ? (ROW__next = idltest_simple6_next(ROW), 1) : (ROW__next = NULL, 0); \
             (ROW) = ROW__next)
#define IDLTEST_SIMPLE6_TABLE_FOR_EACH_SAFE(...)                                        \
        OVERLOAD_SAFE_MACRO(IDLTEST_SIMPLE6_TABLE_FOR_EACH_SAFE_LONG,                   \
                            IDLTEST_SIMPLE6_TABLE_FOR_EACH_SAFE_SHORT, 3, __VA_ARGS__)


const struct idltest_simple6 *idltest_simple6_get_for_uuid(const struct ovsdb_idl *, const struct uuid *);
const struct idltest_simple6 *idltest_simple6_table_get_for_uuid(const struct idltest_simple6_table *, const struct uuid *);
const struct idltest_simple6 *idltest_simple6_first(const struct ovsdb_idl *);
const struct idltest_simple6 *idltest_simple6_next(const struct idltest_simple6 *);
#define IDLTEST_SIMPLE6_FOR_EACH(ROW, IDL) \
        for ((ROW) = idltest_simple6_first(IDL); \
             (ROW); \
             (ROW) = idltest_simple6_next(ROW))
#define IDLTEST_SIMPLE6_FOR_EACH_SAFE_LONG(ROW, NEXT, IDL) \
        for ((ROW) = idltest_simple6_first(IDL); \
             (ROW) ? ((NEXT) = idltest_simple6_next(ROW), 1) : 0; \
             (ROW) = (NEXT))
#define IDLTEST_SIMPLE6_FOR_EACH_SAFE_SHORT(ROW, IDL) \
        for (const struct idltest_simple6 * ROW__next = ((ROW) = idltest_simple6_first(IDL), NULL); \
             (ROW) ? (ROW__next = idltest_simple6_next(ROW), 1) : (ROW__next = NULL, 0); \
             (ROW) = ROW__next)
#define IDLTEST_SIMPLE6_FOR_EACH_SAFE(...)                                         \
        OVERLOAD_SAFE_MACRO(IDLTEST_SIMPLE6_FOR_EACH_SAFE_LONG,                    \
                            IDLTEST_SIMPLE6_FOR_EACH_SAFE_SHORT, 3, __VA_ARGS__)

unsigned int idltest_simple6_get_seqno(const struct ovsdb_idl *);
unsigned int idltest_simple6_row_get_seqno(const struct idltest_simple6 *row, enum ovsdb_idl_change change);
const struct idltest_simple6 *idltest_simple6_track_get_first(const struct ovsdb_idl *);
const struct idltest_simple6 *idltest_simple6_track_get_next(const struct idltest_simple6 *);
#define IDLTEST_SIMPLE6_FOR_EACH_TRACKED(ROW, IDL) \
        for ((ROW) = idltest_simple6_track_get_first(IDL); \
             (ROW); \
             (ROW) = idltest_simple6_track_get_next(ROW))

const struct idltest_simple6 *idltest_simple6_table_track_get_first(const struct idltest_simple6_table *);
#define IDLTEST_SIMPLE6_TABLE_FOR_EACH_TRACKED(ROW, TABLE) \
        for ((ROW) = idltest_simple6_table_track_get_first(TABLE); \
             (ROW); \
             (ROW) = idltest_simple6_track_get_next(ROW))


/* Returns true if 'row' was inserted since the last change tracking reset.
 *
 * Note: This can only be used to test rows of tracked changes. This cannot be
 * used to test if an uncommitted row that has been added locally is new or it
 * may given unexpected results. */
static inline bool idltest_simple6_is_new(const struct idltest_simple6 *row)
{
    return idltest_simple6_row_get_seqno(row, OVSDB_IDL_CHANGE_INSERT) > 0;
}

/* Returns true if 'row' was deleted since the last change tracking reset.
 *
 * Note: This can only be used to test rows of tracked changes. This cannot be
 * used to test if an uncommitted row that has been added locally has been
 * deleted or it may given unexpected results. */
static inline bool idltest_simple6_is_deleted(const struct idltest_simple6 *row)
{
    return idltest_simple6_row_get_seqno(row, OVSDB_IDL_CHANGE_DELETE) > 0;
}

void idltest_simple6_index_destroy_row(const struct idltest_simple6 *);

struct idltest_simple6 *idltest_simple6_index_find(struct ovsdb_idl_index *, const struct idltest_simple6 *);

int idltest_simple6_index_compare(
    struct ovsdb_idl_index *, 
    const struct idltest_simple6 *, 
    const struct idltest_simple6 *);
struct ovsdb_idl_cursor idltest_simple6_cursor_first(struct ovsdb_idl_index *);
struct ovsdb_idl_cursor idltest_simple6_cursor_first_eq(
    struct ovsdb_idl_index *, const struct idltest_simple6 *);
struct ovsdb_idl_cursor idltest_simple6_cursor_first_ge(
    struct ovsdb_idl_index *, const struct idltest_simple6 *);

struct idltest_simple6 *idltest_simple6_cursor_data(struct ovsdb_idl_cursor *);

#define IDLTEST_SIMPLE6_FOR_EACH_RANGE(ROW, FROM, TO, INDEX) \
        for (struct ovsdb_idl_cursor cursor__ = idltest_simple6_cursor_first_ge(INDEX, FROM); \
             (cursor__.position \
              && ((ROW) = idltest_simple6_cursor_data(&cursor__), \
                  !(TO) || idltest_simple6_index_compare(INDEX, ROW, TO) <= 0)); \
             ovsdb_idl_cursor_next(&cursor__))
#define IDLTEST_SIMPLE6_FOR_EACH_EQUAL(ROW, KEY, INDEX) \
        for (struct ovsdb_idl_cursor cursor__ = idltest_simple6_cursor_first_eq(INDEX, KEY); \
             (cursor__.position \
              ? ((ROW) = idltest_simple6_cursor_data(&cursor__), \
                 ovsdb_idl_cursor_next_eq(&cursor__), \
                 true) \
              : false); \
            )
#define IDLTEST_SIMPLE6_FOR_EACH_BYINDEX(ROW, INDEX) \
        for (struct ovsdb_idl_cursor cursor__ = idltest_simple6_cursor_first(INDEX); \
             (cursor__.position \
              ? ((ROW) = idltest_simple6_cursor_data(&cursor__), \
                 ovsdb_idl_cursor_next(&cursor__), \
                 true) \
              : false); \
            )

void idltest_simple6_init(struct idltest_simple6 *);
void idltest_simple6_delete(const struct idltest_simple6 *);
struct idltest_simple6 *idltest_simple6_insert(struct ovsdb_idl_txn *);

/* Returns true if the tracked column referenced by 'enum idltest_simple6_column_id' of
 * the row referenced by 'struct idltest_simple6 *' was updated since the last change
 * tracking reset.
 *
 * Note: This can only be used to test rows of tracked changes. This cannot be
 * used to test if an uncommitted row that has been added locally has been
 * updated or it may given unexpected results. */
bool idltest_simple6_is_updated(const struct idltest_simple6 *, enum idltest_simple6_column_id);

void idltest_simple6_verify_name(const struct idltest_simple6 *);
void idltest_simple6_verify_weak_ref(const struct idltest_simple6 *);

const struct ovsdb_datum *idltest_simple6_get_name(const struct idltest_simple6 *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *idltest_simple6_get_weak_ref(const struct idltest_simple6 *, enum ovsdb_atomic_type key_type);

void idltest_simple6_set_name(const struct idltest_simple6 *, const char *name);
void idltest_simple6_set_weak_ref(const struct idltest_simple6 *, struct idltest_simple **weak_ref, size_t n_weak_ref);

void idltest_simple6_add_clause_name(struct ovsdb_idl_condition *, enum ovsdb_function function, const char *name);
unsigned int idltest_simple6_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void idltest_simple6_update_weak_ref_addvalue(const struct idltest_simple6 *,  const struct idltest_simple *);
void idltest_simple6_update_weak_ref_delvalue(const struct idltest_simple6 *,  const struct idltest_simple *);
void idltest_simple6_add_clause_weak_ref(struct ovsdb_idl_condition *, enum ovsdb_function function, struct uuid **weak_ref, size_t n_weak_ref);
unsigned int idltest_simple6_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);

struct idltest_simple6 *idltest_simple6_index_init_row(struct ovsdb_idl_index *);
void idltest_simple6_index_set_name(const struct idltest_simple6 *,
const char *name);
void idltest_simple6_index_set_weak_ref(const struct idltest_simple6 *,
struct idltest_simple **weak_ref, size_t n_weak_ref);

/* simple7 table. */
struct idltest_simple7 {
	struct ovsdb_idl_row header_;

	/* id column. */
	char *id;	/* Always nonnull. */

	/* name column. */
	char *name;	/* Always nonnull. */
};

enum idltest_simple7_column_id {
    IDLTEST_SIMPLE7_COL_ID,
    IDLTEST_SIMPLE7_COL_NAME,
    IDLTEST_SIMPLE7_N_COLUMNS
};

#define idltest_simple7_col_id (idltest_simple7_columns[IDLTEST_SIMPLE7_COL_ID])
#define idltest_simple7_col_name (idltest_simple7_columns[IDLTEST_SIMPLE7_COL_NAME])

extern struct ovsdb_idl_column idltest_simple7_columns[IDLTEST_SIMPLE7_N_COLUMNS];
bool idltest_server_has_simple7_table_col_id(const struct ovsdb_idl *); 
bool idltest_server_has_simple7_table_col_name(const struct ovsdb_idl *); 

bool idltest_server_has_simple7_table(const struct ovsdb_idl *);
const struct idltest_simple7_table *idltest_simple7_table_get(const struct ovsdb_idl *);
const struct idltest_simple7 *idltest_simple7_table_first(const struct idltest_simple7_table *);

#define IDLTEST_SIMPLE7_TABLE_FOR_EACH(ROW, TABLE) \
        for ((ROW) = idltest_simple7_table_first(TABLE); \
             (ROW); \
             (ROW) = idltest_simple7_next(ROW))
#define IDLTEST_SIMPLE7_TABLE_FOR_EACH_SAFE_LONG(ROW, NEXT, TABLE) \
        for ((ROW) = idltest_simple7_table_first(TABLE); \
             (ROW) ? ((NEXT) = idltest_simple7_next(ROW), 1) : 0; \
             (ROW) = (NEXT))
#define IDLTEST_SIMPLE7_TABLE_FOR_EACH_SAFE_SHORT(ROW, TABLE) \
        for (const struct idltest_simple7 * ROW__next = ((ROW) = idltest_simple7_table_first(TABLE), NULL); \
             (ROW) ? (ROW__next = idltest_simple7_next(ROW), 1) : (ROW__next = NULL, 0); \
             (ROW) = ROW__next)
#define IDLTEST_SIMPLE7_TABLE_FOR_EACH_SAFE(...)                                        \
        OVERLOAD_SAFE_MACRO(IDLTEST_SIMPLE7_TABLE_FOR_EACH_SAFE_LONG,                   \
                            IDLTEST_SIMPLE7_TABLE_FOR_EACH_SAFE_SHORT, 3, __VA_ARGS__)


const struct idltest_simple7 *idltest_simple7_get_for_uuid(const struct ovsdb_idl *, const struct uuid *);
const struct idltest_simple7 *idltest_simple7_table_get_for_uuid(const struct idltest_simple7_table *, const struct uuid *);
const struct idltest_simple7 *idltest_simple7_first(const struct ovsdb_idl *);
const struct idltest_simple7 *idltest_simple7_next(const struct idltest_simple7 *);
#define IDLTEST_SIMPLE7_FOR_EACH(ROW, IDL) \
        for ((ROW) = idltest_simple7_first(IDL); \
             (ROW); \
             (ROW) = idltest_simple7_next(ROW))
#define IDLTEST_SIMPLE7_FOR_EACH_SAFE_LONG(ROW, NEXT, IDL) \
        for ((ROW) = idltest_simple7_first(IDL); \
             (ROW) ? ((NEXT) = idltest_simple7_next(ROW), 1) : 0; \
             (ROW) = (NEXT))
#define IDLTEST_SIMPLE7_FOR_EACH_SAFE_SHORT(ROW, IDL) \
        for (const struct idltest_simple7 * ROW__next = ((ROW) = idltest_simple7_first(IDL), NULL); \
             (ROW) ? (ROW__next = idltest_simple7_next(ROW), 1) : (ROW__next = NULL, 0); \
             (ROW) = ROW__next)
#define IDLTEST_SIMPLE7_FOR_EACH_SAFE(...)                                         \
        OVERLOAD_SAFE_MACRO(IDLTEST_SIMPLE7_FOR_EACH_SAFE_LONG,                    \
                            IDLTEST_SIMPLE7_FOR_EACH_SAFE_SHORT, 3, __VA_ARGS__)

unsigned int idltest_simple7_get_seqno(const struct ovsdb_idl *);
unsigned int idltest_simple7_row_get_seqno(const struct idltest_simple7 *row, enum ovsdb_idl_change change);
const struct idltest_simple7 *idltest_simple7_track_get_first(const struct ovsdb_idl *);
const struct idltest_simple7 *idltest_simple7_track_get_next(const struct idltest_simple7 *);
#define IDLTEST_SIMPLE7_FOR_EACH_TRACKED(ROW, IDL) \
        for ((ROW) = idltest_simple7_track_get_first(IDL); \
             (ROW); \
             (ROW) = idltest_simple7_track_get_next(ROW))

const struct idltest_simple7 *idltest_simple7_table_track_get_first(const struct idltest_simple7_table *);
#define IDLTEST_SIMPLE7_TABLE_FOR_EACH_TRACKED(ROW, TABLE) \
        for ((ROW) = idltest_simple7_table_track_get_first(TABLE); \
             (ROW); \
             (ROW) = idltest_simple7_track_get_next(ROW))


/* Returns true if 'row' was inserted since the last change tracking reset.
 *
 * Note: This can only be used to test rows of tracked changes. This cannot be
 * used to test if an uncommitted row that has been added locally is new or it
 * may given unexpected results. */
static inline bool idltest_simple7_is_new(const struct idltest_simple7 *row)
{
    return idltest_simple7_row_get_seqno(row, OVSDB_IDL_CHANGE_INSERT) > 0;
}

/* Returns true if 'row' was deleted since the last change tracking reset.
 *
 * Note: This can only be used to test rows of tracked changes. This cannot be
 * used to test if an uncommitted row that has been added locally has been
 * deleted or it may given unexpected results. */
static inline bool idltest_simple7_is_deleted(const struct idltest_simple7 *row)
{
    return idltest_simple7_row_get_seqno(row, OVSDB_IDL_CHANGE_DELETE) > 0;
}

void idltest_simple7_index_destroy_row(const struct idltest_simple7 *);

struct idltest_simple7 *idltest_simple7_index_find(struct ovsdb_idl_index *, const struct idltest_simple7 *);

int idltest_simple7_index_compare(
    struct ovsdb_idl_index *, 
    const struct idltest_simple7 *, 
    const struct idltest_simple7 *);
struct ovsdb_idl_cursor idltest_simple7_cursor_first(struct ovsdb_idl_index *);
struct ovsdb_idl_cursor idltest_simple7_cursor_first_eq(
    struct ovsdb_idl_index *, const struct idltest_simple7 *);
struct ovsdb_idl_cursor idltest_simple7_cursor_first_ge(
    struct ovsdb_idl_index *, const struct idltest_simple7 *);

struct idltest_simple7 *idltest_simple7_cursor_data(struct ovsdb_idl_cursor *);

#define IDLTEST_SIMPLE7_FOR_EACH_RANGE(ROW, FROM, TO, INDEX) \
        for (struct ovsdb_idl_cursor cursor__ = idltest_simple7_cursor_first_ge(INDEX, FROM); \
             (cursor__.position \
              && ((ROW) = idltest_simple7_cursor_data(&cursor__), \
                  !(TO) || idltest_simple7_index_compare(INDEX, ROW, TO) <= 0)); \
             ovsdb_idl_cursor_next(&cursor__))
#define IDLTEST_SIMPLE7_FOR_EACH_EQUAL(ROW, KEY, INDEX) \
        for (struct ovsdb_idl_cursor cursor__ = idltest_simple7_cursor_first_eq(INDEX, KEY); \
             (cursor__.position \
              ? ((ROW) = idltest_simple7_cursor_data(&cursor__), \
                 ovsdb_idl_cursor_next_eq(&cursor__), \
                 true) \
              : false); \
            )
#define IDLTEST_SIMPLE7_FOR_EACH_BYINDEX(ROW, INDEX) \
        for (struct ovsdb_idl_cursor cursor__ = idltest_simple7_cursor_first(INDEX); \
             (cursor__.position \
              ? ((ROW) = idltest_simple7_cursor_data(&cursor__), \
                 ovsdb_idl_cursor_next(&cursor__), \
                 true) \
              : false); \
            )

void idltest_simple7_init(struct idltest_simple7 *);
void idltest_simple7_delete(const struct idltest_simple7 *);
struct idltest_simple7 *idltest_simple7_insert(struct ovsdb_idl_txn *);

/* Returns true if the tracked column referenced by 'enum idltest_simple7_column_id' of
 * the row referenced by 'struct idltest_simple7 *' was updated since the last change
 * tracking reset.
 *
 * Note: This can only be used to test rows of tracked changes. This cannot be
 * used to test if an uncommitted row that has been added locally has been
 * updated or it may given unexpected results. */
bool idltest_simple7_is_updated(const struct idltest_simple7 *, enum idltest_simple7_column_id);

void idltest_simple7_verify_id(const struct idltest_simple7 *);
void idltest_simple7_verify_name(const struct idltest_simple7 *);

const struct ovsdb_datum *idltest_simple7_get_id(const struct idltest_simple7 *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *idltest_simple7_get_name(const struct idltest_simple7 *, enum ovsdb_atomic_type key_type);

void idltest_simple7_set_id(const struct idltest_simple7 *, const char *id);
void idltest_simple7_set_name(const struct idltest_simple7 *, const char *name);

void idltest_simple7_add_clause_id(struct ovsdb_idl_condition *, enum ovsdb_function function, const char *id);
unsigned int idltest_simple7_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);
void idltest_simple7_add_clause_name(struct ovsdb_idl_condition *, enum ovsdb_function function, const char *name);
unsigned int idltest_simple7_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);

struct idltest_simple7 *idltest_simple7_index_init_row(struct ovsdb_idl_index *);
void idltest_simple7_index_set_id(const struct idltest_simple7 *,
const char *id);
void idltest_simple7_index_set_name(const struct idltest_simple7 *,
const char *name);

/* singleton table. */
struct idltest_singleton {
	struct ovsdb_idl_row header_;

	/* name column. */
	char *name;	/* Always nonnull. */
};

enum idltest_singleton_column_id {
    IDLTEST_SINGLETON_COL_NAME,
    IDLTEST_SINGLETON_N_COLUMNS
};

#define idltest_singleton_col_name (idltest_singleton_columns[IDLTEST_SINGLETON_COL_NAME])

extern struct ovsdb_idl_column idltest_singleton_columns[IDLTEST_SINGLETON_N_COLUMNS];
bool idltest_server_has_singleton_table_col_name(const struct ovsdb_idl *); 

bool idltest_server_has_singleton_table(const struct ovsdb_idl *);
const struct idltest_singleton_table *idltest_singleton_table_get(const struct ovsdb_idl *);
const struct idltest_singleton *idltest_singleton_table_first(const struct idltest_singleton_table *);

#define IDLTEST_SINGLETON_TABLE_FOR_EACH(ROW, TABLE) \
        for ((ROW) = idltest_singleton_table_first(TABLE); \
             (ROW); \
             (ROW) = idltest_singleton_next(ROW))
#define IDLTEST_SINGLETON_TABLE_FOR_EACH_SAFE_LONG(ROW, NEXT, TABLE) \
        for ((ROW) = idltest_singleton_table_first(TABLE); \
             (ROW) ? ((NEXT) = idltest_singleton_next(ROW), 1) : 0; \
             (ROW) = (NEXT))
#define IDLTEST_SINGLETON_TABLE_FOR_EACH_SAFE_SHORT(ROW, TABLE) \
        for (const struct idltest_singleton * ROW__next = ((ROW) = idltest_singleton_table_first(TABLE), NULL); \
             (ROW) ? (ROW__next = idltest_singleton_next(ROW), 1) : (ROW__next = NULL, 0); \
             (ROW) = ROW__next)
#define IDLTEST_SINGLETON_TABLE_FOR_EACH_SAFE(...)                                        \
        OVERLOAD_SAFE_MACRO(IDLTEST_SINGLETON_TABLE_FOR_EACH_SAFE_LONG,                   \
                            IDLTEST_SINGLETON_TABLE_FOR_EACH_SAFE_SHORT, 3, __VA_ARGS__)


const struct idltest_singleton *idltest_singleton_get_for_uuid(const struct ovsdb_idl *, const struct uuid *);
const struct idltest_singleton *idltest_singleton_table_get_for_uuid(const struct idltest_singleton_table *, const struct uuid *);
const struct idltest_singleton *idltest_singleton_first(const struct ovsdb_idl *);
const struct idltest_singleton *idltest_singleton_next(const struct idltest_singleton *);
#define IDLTEST_SINGLETON_FOR_EACH(ROW, IDL) \
        for ((ROW) = idltest_singleton_first(IDL); \
             (ROW); \
             (ROW) = idltest_singleton_next(ROW))
#define IDLTEST_SINGLETON_FOR_EACH_SAFE_LONG(ROW, NEXT, IDL) \
        for ((ROW) = idltest_singleton_first(IDL); \
             (ROW) ? ((NEXT) = idltest_singleton_next(ROW), 1) : 0; \
             (ROW) = (NEXT))
#define IDLTEST_SINGLETON_FOR_EACH_SAFE_SHORT(ROW, IDL) \
        for (const struct idltest_singleton * ROW__next = ((ROW) = idltest_singleton_first(IDL), NULL); \
             (ROW) ? (ROW__next = idltest_singleton_next(ROW), 1) : (ROW__next = NULL, 0); \
             (ROW) = ROW__next)
#define IDLTEST_SINGLETON_FOR_EACH_SAFE(...)                                         \
        OVERLOAD_SAFE_MACRO(IDLTEST_SINGLETON_FOR_EACH_SAFE_LONG,                    \
                            IDLTEST_SINGLETON_FOR_EACH_SAFE_SHORT, 3, __VA_ARGS__)

unsigned int idltest_singleton_get_seqno(const struct ovsdb_idl *);
unsigned int idltest_singleton_row_get_seqno(const struct idltest_singleton *row, enum ovsdb_idl_change change);
const struct idltest_singleton *idltest_singleton_track_get_first(const struct ovsdb_idl *);
const struct idltest_singleton *idltest_singleton_track_get_next(const struct idltest_singleton *);
#define IDLTEST_SINGLETON_FOR_EACH_TRACKED(ROW, IDL) \
        for ((ROW) = idltest_singleton_track_get_first(IDL); \
             (ROW); \
             (ROW) = idltest_singleton_track_get_next(ROW))

const struct idltest_singleton *idltest_singleton_table_track_get_first(const struct idltest_singleton_table *);
#define IDLTEST_SINGLETON_TABLE_FOR_EACH_TRACKED(ROW, TABLE) \
        for ((ROW) = idltest_singleton_table_track_get_first(TABLE); \
             (ROW); \
             (ROW) = idltest_singleton_track_get_next(ROW))


/* Returns true if 'row' was inserted since the last change tracking reset.
 *
 * Note: This can only be used to test rows of tracked changes. This cannot be
 * used to test if an uncommitted row that has been added locally is new or it
 * may given unexpected results. */
static inline bool idltest_singleton_is_new(const struct idltest_singleton *row)
{
    return idltest_singleton_row_get_seqno(row, OVSDB_IDL_CHANGE_INSERT) > 0;
}

/* Returns true if 'row' was deleted since the last change tracking reset.
 *
 * Note: This can only be used to test rows of tracked changes. This cannot be
 * used to test if an uncommitted row that has been added locally has been
 * deleted or it may given unexpected results. */
static inline bool idltest_singleton_is_deleted(const struct idltest_singleton *row)
{
    return idltest_singleton_row_get_seqno(row, OVSDB_IDL_CHANGE_DELETE) > 0;
}

void idltest_singleton_index_destroy_row(const struct idltest_singleton *);

struct idltest_singleton *idltest_singleton_index_find(struct ovsdb_idl_index *, const struct idltest_singleton *);

int idltest_singleton_index_compare(
    struct ovsdb_idl_index *, 
    const struct idltest_singleton *, 
    const struct idltest_singleton *);
struct ovsdb_idl_cursor idltest_singleton_cursor_first(struct ovsdb_idl_index *);
struct ovsdb_idl_cursor idltest_singleton_cursor_first_eq(
    struct ovsdb_idl_index *, const struct idltest_singleton *);
struct ovsdb_idl_cursor idltest_singleton_cursor_first_ge(
    struct ovsdb_idl_index *, const struct idltest_singleton *);

struct idltest_singleton *idltest_singleton_cursor_data(struct ovsdb_idl_cursor *);

#define IDLTEST_SINGLETON_FOR_EACH_RANGE(ROW, FROM, TO, INDEX) \
        for (struct ovsdb_idl_cursor cursor__ = idltest_singleton_cursor_first_ge(INDEX, FROM); \
             (cursor__.position \
              && ((ROW) = idltest_singleton_cursor_data(&cursor__), \
                  !(TO) || idltest_singleton_index_compare(INDEX, ROW, TO) <= 0)); \
             ovsdb_idl_cursor_next(&cursor__))
#define IDLTEST_SINGLETON_FOR_EACH_EQUAL(ROW, KEY, INDEX) \
        for (struct ovsdb_idl_cursor cursor__ = idltest_singleton_cursor_first_eq(INDEX, KEY); \
             (cursor__.position \
              ? ((ROW) = idltest_singleton_cursor_data(&cursor__), \
                 ovsdb_idl_cursor_next_eq(&cursor__), \
                 true) \
              : false); \
            )
#define IDLTEST_SINGLETON_FOR_EACH_BYINDEX(ROW, INDEX) \
        for (struct ovsdb_idl_cursor cursor__ = idltest_singleton_cursor_first(INDEX); \
             (cursor__.position \
              ? ((ROW) = idltest_singleton_cursor_data(&cursor__), \
                 ovsdb_idl_cursor_next(&cursor__), \
                 true) \
              : false); \
            )

void idltest_singleton_init(struct idltest_singleton *);
void idltest_singleton_delete(const struct idltest_singleton *);
struct idltest_singleton *idltest_singleton_insert(struct ovsdb_idl_txn *);

/* Returns true if the tracked column referenced by 'enum idltest_singleton_column_id' of
 * the row referenced by 'struct idltest_singleton *' was updated since the last change
 * tracking reset.
 *
 * Note: This can only be used to test rows of tracked changes. This cannot be
 * used to test if an uncommitted row that has been added locally has been
 * updated or it may given unexpected results. */
bool idltest_singleton_is_updated(const struct idltest_singleton *, enum idltest_singleton_column_id);

void idltest_singleton_verify_name(const struct idltest_singleton *);

const struct ovsdb_datum *idltest_singleton_get_name(const struct idltest_singleton *, enum ovsdb_atomic_type key_type);

void idltest_singleton_set_name(const struct idltest_singleton *, const char *name);

void idltest_singleton_add_clause_name(struct ovsdb_idl_condition *, enum ovsdb_function function, const char *name);
unsigned int idltest_singleton_set_condition(struct ovsdb_idl *, struct ovsdb_idl_condition *);

struct idltest_singleton *idltest_singleton_index_init_row(struct ovsdb_idl_index *);
void idltest_singleton_index_set_name(const struct idltest_singleton *,
const char *name);

enum idltest_table_id {
    IDLTEST_TABLE_INDEXED,
    IDLTEST_TABLE_LINK1,
    IDLTEST_TABLE_LINK2,
    IDLTEST_TABLE_SIMPLE,
    IDLTEST_TABLE_SIMPLE2,
    IDLTEST_TABLE_SIMPLE3,
    IDLTEST_TABLE_SIMPLE4,
    IDLTEST_TABLE_SIMPLE5,
    IDLTEST_TABLE_SIMPLE6,
    IDLTEST_TABLE_SIMPLE7,
    IDLTEST_TABLE_SINGLETON,
    IDLTEST_N_TABLES
};

#define idltest_table_indexed (idltest_table_classes[IDLTEST_TABLE_INDEXED])
#define idltest_table_link1 (idltest_table_classes[IDLTEST_TABLE_LINK1])
#define idltest_table_link2 (idltest_table_classes[IDLTEST_TABLE_LINK2])
#define idltest_table_simple (idltest_table_classes[IDLTEST_TABLE_SIMPLE])
#define idltest_table_simple2 (idltest_table_classes[IDLTEST_TABLE_SIMPLE2])
#define idltest_table_simple3 (idltest_table_classes[IDLTEST_TABLE_SIMPLE3])
#define idltest_table_simple4 (idltest_table_classes[IDLTEST_TABLE_SIMPLE4])
#define idltest_table_simple5 (idltest_table_classes[IDLTEST_TABLE_SIMPLE5])
#define idltest_table_simple6 (idltest_table_classes[IDLTEST_TABLE_SIMPLE6])
#define idltest_table_simple7 (idltest_table_classes[IDLTEST_TABLE_SIMPLE7])
#define idltest_table_singleton (idltest_table_classes[IDLTEST_TABLE_SINGLETON])

extern struct ovsdb_idl_table_class idltest_table_classes[IDLTEST_N_TABLES];

extern struct ovsdb_idl_class idltest_idl_class;

const char * idltest_get_db_version(void);

#ifdef  __cplusplus
}
#endif

#endif /* IDLTEST_IDL_HEADER */
