// This file was generated by ODB, object-relational mapping (ORM)
// compiler for C++.
//

#ifndef REFERENCE_SERVICE_ODB_H
#define REFERENCE_SERVICE_ODB_H

#include <odb/version.hxx>

#if (ODB_VERSION != 20400UL)
#error ODB runtime version mismatch
#endif

#include <odb/pre.hxx>

#include "ReferenceService.h"

#include "TsSvcId-odb.h"

#include <memory>
#include <cstddef>
#include <utility>

#include <odb/core.hxx>
#include <odb/traits.hxx>
#include <odb/callback.hxx>
#include <odb/wrapper-traits.hxx>
#include <odb/pointer-traits.hxx>
#include <odb/container-traits.hxx>
#include <odb/session.hxx>
#include <odb/cache-traits.hxx>
#include <odb/result.hxx>
#include <odb/simple-object-result.hxx>

#include <odb/details/unused.hxx>
#include <odb/details/shared-ptr.hxx>

namespace odb
{
  // ReferenceService
  //
  template <>
  struct class_traits< ::ReferenceService >
  {
    static const class_kind kind = class_object;
  };

  template <>
  class access::object_traits< ::ReferenceService >
  {
    public:
    typedef ::ReferenceService object_type;
    typedef ::std::shared_ptr< ::ReferenceService > pointer_type;
    typedef odb::pointer_traits<pointer_type> pointer_traits;

    static const bool polymorphic = false;

    typedef ::TsSvcId id_type;

    static const bool auto_id = false;

    static const bool abstract = false;

    static id_type
    id (const object_type&);

    typedef
    odb::pointer_cache_traits<
      pointer_type,
      odb::session >
    pointer_cache_traits;

    typedef
    odb::reference_cache_traits<
      object_type,
      odb::session >
    reference_cache_traits;

    static void
    callback (database&, object_type&, callback_event);

    static void
    callback (database&, const object_type&, callback_event);
  };

  // ReferenceServiceEvent
  //
  template <>
  struct class_traits< ::ReferenceServiceEvent >
  {
    static const class_kind kind = class_object;
  };

  template <>
  class access::object_traits< ::ReferenceServiceEvent >
  {
    public:
    typedef ::ReferenceServiceEvent object_type;
    typedef ::std::shared_ptr< ::ReferenceServiceEvent > pointer_type;
    typedef odb::pointer_traits<pointer_type> pointer_traits;

    static const bool polymorphic = false;

    typedef ::TableIndex id_type;

    static const bool auto_id = false;

    static const bool abstract = false;

    static id_type
    id (const object_type&);

    typedef
    odb::pointer_cache_traits<
      pointer_type,
      odb::session >
    pointer_cache_traits;

    typedef
    odb::reference_cache_traits<
      object_type,
      odb::session >
    reference_cache_traits;

    static void
    callback (database&, object_type&, callback_event);

    static void
    callback (database&, const object_type&, callback_event);
  };

  // Movie
  //
  template <>
  struct class_traits< ::Movie >
  {
    static const class_kind kind = class_object;
  };

  template <>
  class access::object_traits< ::Movie >
  {
    public:
    typedef ::Movie object_type;
    typedef ::std::shared_ptr< ::Movie > pointer_type;
    typedef odb::pointer_traits<pointer_type> pointer_traits;

    static const bool polymorphic = false;

    typedef ::MovieId id_type;

    static const bool auto_id = false;

    static const bool abstract = false;

    static id_type
    id (const object_type&);

    typedef
    odb::pointer_cache_traits<
      pointer_type,
      odb::session >
    pointer_cache_traits;

    typedef
    odb::reference_cache_traits<
      object_type,
      odb::session >
    reference_cache_traits;

    static void
    callback (database&, object_type&, callback_event);

    static void
    callback (database&, const object_type&, callback_event);
  };
}

#include <odb/details/buffer.hxx>

#include <odb/mysql/version.hxx>
#include <odb/mysql/forward.hxx>
#include <odb/mysql/binding.hxx>
#include <odb/mysql/mysql-types.hxx>
#include <odb/mysql/query.hxx>

namespace odb
{
  // ReferenceService
  //
  template <typename A>
  struct query_columns< ::ReferenceService, id_mysql, A >
  {
    // refsId
    //
    struct refsId_class_
    {
      refsId_class_ ()
      {
      }

      // tsId
      //
      typedef
      mysql::query_column<
        mysql::value_traits<
          ::TsId,
          mysql::id_ushort >::query_type,
        mysql::id_ushort >
      tsId_type_;

      static const tsId_type_ tsId;

      // serviceId
      //
      typedef
      mysql::query_column<
        mysql::value_traits<
          ::ServiceId,
          mysql::id_ushort >::query_type,
        mysql::id_ushort >
      serviceId_type_;

      static const serviceId_type_ serviceId;
    };

    static const refsId_class_ refsId;

    // description
    //
    typedef
    mysql::query_column<
      mysql::value_traits<
        ::std::string,
        mysql::id_string >::query_type,
      mysql::id_string >
    description_type_;

    static const description_type_ description;
  };

  template <typename A>
  const typename query_columns< ::ReferenceService, id_mysql, A >::refsId_class_::tsId_type_
  query_columns< ::ReferenceService, id_mysql, A >::refsId_class_::
  tsId (A::table_name, "`RefsId_TsId`", 0);

  template <typename A>
  const typename query_columns< ::ReferenceService, id_mysql, A >::refsId_class_::serviceId_type_
  query_columns< ::ReferenceService, id_mysql, A >::refsId_class_::
  serviceId (A::table_name, "`RefsId_SvcId`", 0);

  template <typename A>
  const typename query_columns< ::ReferenceService, id_mysql, A >::refsId_class_
  query_columns< ::ReferenceService, id_mysql, A >::refsId;

  template <typename A>
  const typename query_columns< ::ReferenceService, id_mysql, A >::description_type_
  query_columns< ::ReferenceService, id_mysql, A >::
  description (A::table_name, "`Description`", 0);

  template <typename A>
  struct pointer_query_columns< ::ReferenceService, id_mysql, A >:
    query_columns< ::ReferenceService, id_mysql, A >
  {
  };

  template <>
  class access::object_traits_impl< ::ReferenceService, id_mysql >:
    public access::object_traits< ::ReferenceService >
  {
    public:
    struct id_image_type
    {
      composite_value_traits< ::TsSvcId, id_mysql >::image_type id_value;

      std::size_t version;
    };

    struct image_type
    {
      // refsId
      //
      composite_value_traits< ::TsSvcId, id_mysql >::image_type refsId_value;

      // description
      //
      details::buffer description_value;
      unsigned long description_size;
      my_bool description_null;

      std::size_t version;
    };

    struct extra_statement_cache_type;

    // events
    //
    struct events_traits
    {
      static const std::size_t id_column_count = 2UL;
      static const std::size_t data_column_count = 3UL;

      static const bool versioned = false;

      static const char insert_statement[];
      static const char select_statement[];
      static const char delete_statement[];

      typedef ::ReferenceService::RefsEventsType container_type;
      typedef
      odb::access::container_traits<container_type>
      container_traits_type;
      typedef container_traits_type::index_type index_type;
      typedef container_traits_type::value_type value_type;

      typedef ordered_functions<index_type, value_type> functions_type;
      typedef mysql::container_statements< events_traits > statements_type;

      struct data_image_type
      {
        // value
        //
        unsigned int value_value;
        my_bool value_null;

        std::size_t version;
      };

      static void
      bind (MYSQL_BIND*,
            const MYSQL_BIND* id,
            std::size_t id_size,
            data_image_type&);

      static void
      grow (data_image_type&,
            my_bool*);

      static void
      init (value_type&,
            const data_image_type&,
            database*);

      static void
      insert (index_type, const value_type&, void*);

      static bool
      select (index_type&, value_type&, void*);

      static void
      delete_ (void*);

      static void
      load (container_type&,
            statements_type&);
    };

    using object_traits<object_type>::id;

    static id_type
    id (const image_type&);

    static bool
    grow (image_type&,
          my_bool*);

    static void
    bind (MYSQL_BIND*,
          image_type&,
          mysql::statement_kind);

    static void
    bind (MYSQL_BIND*, id_image_type&);

    static bool
    init (image_type&,
          const object_type&,
          mysql::statement_kind);

    static void
    init (object_type&,
          const image_type&,
          database*);

    static void
    init (id_image_type&, const id_type&);

    typedef mysql::object_statements<object_type> statements_type;

    typedef mysql::query_base query_base_type;

    static const std::size_t column_count = 3UL;
    static const std::size_t id_column_count = 2UL;
    static const std::size_t inverse_column_count = 0UL;
    static const std::size_t readonly_column_count = 0UL;
    static const std::size_t managed_optimistic_column_count = 0UL;

    static const std::size_t separate_load_column_count = 0UL;
    static const std::size_t separate_update_column_count = 0UL;

    static const bool versioned = false;

    static const char persist_statement[];
    static const char find_statement[];
    static const char update_statement[];
    static const char erase_statement[];
    static const char query_statement[];
    static const char erase_query_statement[];

    static const char table_name[];

    static void
    persist (database&, const object_type&);

    static pointer_type
    find (database&, const id_type&);

    static bool
    find (database&, const id_type&, object_type&);

    static bool
    reload (database&, object_type&);

    static void
    update (database&, const object_type&);

    static void
    erase (database&, const id_type&);

    static void
    erase (database&, const object_type&);

    static result<object_type>
    query (database&, const query_base_type&);

    static unsigned long long
    erase_query (database&, const query_base_type&);

    public:
    static bool
    find_ (statements_type&,
           const id_type*);

    static void
    load_ (statements_type&,
           object_type&,
           bool reload);
  };

  template <>
  class access::object_traits_impl< ::ReferenceService, id_common >:
    public access::object_traits_impl< ::ReferenceService, id_mysql >
  {
  };

  // ReferenceServiceEvent
  //
  template <typename A>
  struct pointer_query_columns< ::ReferenceServiceEvent, id_mysql, A >
  {
    // idx
    //
    typedef
    mysql::query_column<
      mysql::value_traits<
        ::TableIndex,
        mysql::id_ulong >::query_type,
      mysql::id_ulong >
    idx_type_;

    static const idx_type_ idx;

    // eventId
    //
    typedef
    mysql::query_column<
      mysql::value_traits<
        ::EventId,
        mysql::id_ushort >::query_type,
      mysql::id_ushort >
    eventId_type_;

    static const eventId_type_ eventId;

    // startTimePoint
    //
    typedef
    mysql::query_column<
      mysql::value_traits<
        ::TimePoint,
        mysql::id_ulonglong >::query_type,
      mysql::id_ulonglong >
    startTimePoint_type_;

    static const startTimePoint_type_ startTimePoint;

    // duration
    //
    typedef
    mysql::query_column<
      mysql::value_traits<
        ::Seconds,
        mysql::id_ulonglong >::query_type,
      mysql::id_ulonglong >
    duration_type_;

    static const duration_type_ duration;

    // refs
    //
    struct refs_class_
    {
      refs_class_ ()
      {
      }

      // tsId
      //
      typedef
      mysql::query_column<
        mysql::value_traits<
          ::TsId,
          mysql::id_ushort >::query_type,
        mysql::id_ushort >
      tsId_type_;

      static const tsId_type_ tsId;

      // serviceId
      //
      typedef
      mysql::query_column<
        mysql::value_traits<
          ::ServiceId,
          mysql::id_ushort >::query_type,
        mysql::id_ushort >
      serviceId_type_;

      static const serviceId_type_ serviceId;
    };

    static const refs_class_ refs;
  };

  template <typename A>
  const typename pointer_query_columns< ::ReferenceServiceEvent, id_mysql, A >::idx_type_
  pointer_query_columns< ::ReferenceServiceEvent, id_mysql, A >::
  idx (A::table_name, "`Idx`", 0);

  template <typename A>
  const typename pointer_query_columns< ::ReferenceServiceEvent, id_mysql, A >::eventId_type_
  pointer_query_columns< ::ReferenceServiceEvent, id_mysql, A >::
  eventId (A::table_name, "`EventId`", 0);

  template <typename A>
  const typename pointer_query_columns< ::ReferenceServiceEvent, id_mysql, A >::startTimePoint_type_
  pointer_query_columns< ::ReferenceServiceEvent, id_mysql, A >::
  startTimePoint (A::table_name, "`StartTimePoint`", 0);

  template <typename A>
  const typename pointer_query_columns< ::ReferenceServiceEvent, id_mysql, A >::duration_type_
  pointer_query_columns< ::ReferenceServiceEvent, id_mysql, A >::
  duration (A::table_name, "`Duration`", 0);

  template <typename A>
  const typename pointer_query_columns< ::ReferenceServiceEvent, id_mysql, A >::refs_class_::tsId_type_
  pointer_query_columns< ::ReferenceServiceEvent, id_mysql, A >::refs_class_::
  tsId (A::table_name, "`Refs_TsId`", 0);

  template <typename A>
  const typename pointer_query_columns< ::ReferenceServiceEvent, id_mysql, A >::refs_class_::serviceId_type_
  pointer_query_columns< ::ReferenceServiceEvent, id_mysql, A >::refs_class_::
  serviceId (A::table_name, "`Refs_SvcId`", 0);

  template <typename A>
  const typename pointer_query_columns< ::ReferenceServiceEvent, id_mysql, A >::refs_class_
  pointer_query_columns< ::ReferenceServiceEvent, id_mysql, A >::refs;

  template <>
  class access::object_traits_impl< ::ReferenceServiceEvent, id_mysql >:
    public access::object_traits< ::ReferenceServiceEvent >
  {
    public:
    struct id_image_type
    {
      unsigned int id_value;
      my_bool id_null;

      std::size_t version;
    };

    struct image_type
    {
      // idx
      //
      unsigned int idx_value;
      my_bool idx_null;

      // eventId
      //
      unsigned short eventId_value;
      my_bool eventId_null;

      // startTimePoint
      //
      unsigned long long startTimePoint_value;
      my_bool startTimePoint_null;

      // duration
      //
      unsigned long long duration_value;
      my_bool duration_null;

      // refs
      //
      composite_value_traits< ::TsSvcId, id_mysql >::image_type refs_value;

      std::size_t version;
    };

    struct extra_statement_cache_type;

    // movies
    //
    struct movies_traits
    {
      static const std::size_t id_column_count = 1UL;
      static const std::size_t data_column_count = 2UL;

      static const bool versioned = false;

      static const char insert_statement[];
      static const char select_statement[];
      static const char delete_statement[];

      typedef ::ReferenceServiceEvent::MoviesType container_type;
      typedef
      odb::access::container_traits<container_type>
      container_traits_type;
      typedef container_traits_type::index_type index_type;
      typedef container_traits_type::value_type value_type;

      typedef ordered_functions<index_type, value_type> functions_type;
      typedef mysql::container_statements< movies_traits > statements_type;

      struct data_image_type
      {
        // value
        //
        unsigned int value_value;
        my_bool value_null;

        std::size_t version;
      };

      static void
      bind (MYSQL_BIND*,
            const MYSQL_BIND* id,
            std::size_t id_size,
            data_image_type&);

      static void
      grow (data_image_type&,
            my_bool*);

      static void
      init (value_type&,
            const data_image_type&,
            database*);

      static void
      insert (index_type, const value_type&, void*);

      static bool
      select (index_type&, value_type&, void*);

      static void
      delete_ (void*);

      static void
      load (container_type&,
            statements_type&);
    };

    struct refs_tag;

    using object_traits<object_type>::id;

    static id_type
    id (const image_type&);

    static bool
    grow (image_type&,
          my_bool*);

    static void
    bind (MYSQL_BIND*,
          image_type&,
          mysql::statement_kind);

    static void
    bind (MYSQL_BIND*, id_image_type&);

    static bool
    init (image_type&,
          const object_type&,
          mysql::statement_kind);

    static void
    init (object_type&,
          const image_type&,
          database*);

    static void
    init (id_image_type&, const id_type&);

    typedef mysql::object_statements<object_type> statements_type;

    typedef mysql::query_base query_base_type;

    static const std::size_t column_count = 6UL;
    static const std::size_t id_column_count = 1UL;
    static const std::size_t inverse_column_count = 0UL;
    static const std::size_t readonly_column_count = 0UL;
    static const std::size_t managed_optimistic_column_count = 0UL;

    static const std::size_t separate_load_column_count = 0UL;
    static const std::size_t separate_update_column_count = 0UL;

    static const bool versioned = false;

    static const char persist_statement[];
    static const char find_statement[];
    static const char update_statement[];
    static const char erase_statement[];
    static const char query_statement[];
    static const char erase_query_statement[];

    static const char table_name[];

    static void
    persist (database&, const object_type&);

    static pointer_type
    find (database&, const id_type&);

    static bool
    find (database&, const id_type&, object_type&);

    static bool
    reload (database&, object_type&);

    static void
    update (database&, const object_type&);

    static void
    erase (database&, const id_type&);

    static void
    erase (database&, const object_type&);

    static result<object_type>
    query (database&, const query_base_type&);

    static unsigned long long
    erase_query (database&, const query_base_type&);

    public:
    static bool
    find_ (statements_type&,
           const id_type*);

    static void
    load_ (statements_type&,
           object_type&,
           bool reload);
  };

  template <>
  class access::object_traits_impl< ::ReferenceServiceEvent, id_common >:
    public access::object_traits_impl< ::ReferenceServiceEvent, id_mysql >
  {
  };

  // Movie
  //
  template <typename A>
  struct query_columns< ::Movie, id_mysql, A >
  {
    // movieId
    //
    typedef
    mysql::query_column<
      mysql::value_traits<
        ::MovieId,
        mysql::id_ulong >::query_type,
      mysql::id_ulong >
    movieId_type_;

    static const movieId_type_ movieId;

    // description
    //
    typedef
    mysql::query_column<
      mysql::value_traits<
        ::std::string,
        mysql::id_string >::query_type,
      mysql::id_string >
    description_type_;

    static const description_type_ description;
  };

  template <typename A>
  const typename query_columns< ::Movie, id_mysql, A >::movieId_type_
  query_columns< ::Movie, id_mysql, A >::
  movieId (A::table_name, "`MovieId`", 0);

  template <typename A>
  const typename query_columns< ::Movie, id_mysql, A >::description_type_
  query_columns< ::Movie, id_mysql, A >::
  description (A::table_name, "`Description`", 0);

  template <typename A>
  struct pointer_query_columns< ::Movie, id_mysql, A >:
    query_columns< ::Movie, id_mysql, A >
  {
  };

  template <>
  class access::object_traits_impl< ::Movie, id_mysql >:
    public access::object_traits< ::Movie >
  {
    public:
    struct id_image_type
    {
      unsigned int id_value;
      my_bool id_null;

      std::size_t version;
    };

    struct image_type
    {
      // movieId
      //
      unsigned int movieId_value;
      my_bool movieId_null;

      // description
      //
      details::buffer description_value;
      unsigned long description_size;
      my_bool description_null;

      std::size_t version;
    };

    struct extra_statement_cache_type;

    // events
    //
    struct events_traits
    {
      static const std::size_t id_column_count = 1UL;
      static const std::size_t data_column_count = 2UL;

      static const bool versioned = false;

      static const char insert_statement[];
      static const char select_statement[];
      static const char delete_statement[];

      typedef ::Movie::RefsEventsType container_type;
      typedef
      odb::access::container_traits<container_type>
      container_traits_type;
      typedef container_traits_type::index_type index_type;
      typedef container_traits_type::value_type value_type;

      typedef ordered_functions<index_type, value_type> functions_type;
      typedef mysql::container_statements< events_traits > statements_type;

      struct data_image_type
      {
        // value
        //
        unsigned int value_value;
        my_bool value_null;

        std::size_t version;
      };

      static void
      bind (MYSQL_BIND*,
            const MYSQL_BIND* id,
            std::size_t id_size,
            data_image_type&);

      static void
      grow (data_image_type&,
            my_bool*);

      static void
      init (data_image_type&,
            const value_type&);

      static void
      init (value_type&,
            const data_image_type&,
            database*);

      static void
      insert (index_type, const value_type&, void*);

      static bool
      select (index_type&, value_type&, void*);

      static void
      delete_ (void*);

      static void
      persist (const container_type&,
               statements_type&);

      static void
      load (container_type&,
            statements_type&);

      static void
      update (const container_type&,
              statements_type&);

      static void
      erase (statements_type&);
    };

    using object_traits<object_type>::id;

    static id_type
    id (const image_type&);

    static bool
    grow (image_type&,
          my_bool*);

    static void
    bind (MYSQL_BIND*,
          image_type&,
          mysql::statement_kind);

    static void
    bind (MYSQL_BIND*, id_image_type&);

    static bool
    init (image_type&,
          const object_type&,
          mysql::statement_kind);

    static void
    init (object_type&,
          const image_type&,
          database*);

    static void
    init (id_image_type&, const id_type&);

    typedef mysql::object_statements<object_type> statements_type;

    typedef mysql::query_base query_base_type;

    static const std::size_t column_count = 2UL;
    static const std::size_t id_column_count = 1UL;
    static const std::size_t inverse_column_count = 0UL;
    static const std::size_t readonly_column_count = 0UL;
    static const std::size_t managed_optimistic_column_count = 0UL;

    static const std::size_t separate_load_column_count = 0UL;
    static const std::size_t separate_update_column_count = 0UL;

    static const bool versioned = false;

    static const char persist_statement[];
    static const char find_statement[];
    static const char update_statement[];
    static const char erase_statement[];
    static const char query_statement[];
    static const char erase_query_statement[];

    static const char table_name[];

    static void
    persist (database&, const object_type&);

    static pointer_type
    find (database&, const id_type&);

    static bool
    find (database&, const id_type&, object_type&);

    static bool
    reload (database&, object_type&);

    static void
    update (database&, const object_type&);

    static void
    erase (database&, const id_type&);

    static void
    erase (database&, const object_type&);

    static result<object_type>
    query (database&, const query_base_type&);

    static unsigned long long
    erase_query (database&, const query_base_type&);

    public:
    static bool
    find_ (statements_type&,
           const id_type*);

    static void
    load_ (statements_type&,
           object_type&,
           bool reload);
  };

  template <>
  class access::object_traits_impl< ::Movie, id_common >:
    public access::object_traits_impl< ::Movie, id_mysql >
  {
  };

  // ReferenceService
  //
  // ReferenceServiceEvent
  //
  template <>
  struct alias_traits<
    ::ReferenceService,
    id_mysql,
    access::object_traits_impl< ::ReferenceServiceEvent, id_mysql >::refs_tag>
  {
    static const char table_name[];
  };

  template <>
  struct query_columns_base< ::ReferenceServiceEvent, id_mysql >
  {
    // refs
    //
    typedef
    odb::alias_traits<
      ::ReferenceService,
      id_mysql,
      access::object_traits_impl< ::ReferenceServiceEvent, id_mysql >::refs_tag>
    refs_alias_;
  };

  template <typename A>
  struct query_columns< ::ReferenceServiceEvent, id_mysql, A >:
    query_columns_base< ::ReferenceServiceEvent, id_mysql >
  {
    // idx
    //
    typedef
    mysql::query_column<
      mysql::value_traits<
        ::TableIndex,
        mysql::id_ulong >::query_type,
      mysql::id_ulong >
    idx_type_;

    static const idx_type_ idx;

    // eventId
    //
    typedef
    mysql::query_column<
      mysql::value_traits<
        ::EventId,
        mysql::id_ushort >::query_type,
      mysql::id_ushort >
    eventId_type_;

    static const eventId_type_ eventId;

    // startTimePoint
    //
    typedef
    mysql::query_column<
      mysql::value_traits<
        ::TimePoint,
        mysql::id_ulonglong >::query_type,
      mysql::id_ulonglong >
    startTimePoint_type_;

    static const startTimePoint_type_ startTimePoint;

    // duration
    //
    typedef
    mysql::query_column<
      mysql::value_traits<
        ::Seconds,
        mysql::id_ulonglong >::query_type,
      mysql::id_ulonglong >
    duration_type_;

    static const duration_type_ duration;

    // refs
    //
    struct refs_column_class_
    {
      refs_column_class_ ()
      {
      }

      // tsId
      //
      typedef
      mysql::query_column<
        mysql::value_traits<
          ::TsId,
          mysql::id_ushort >::query_type,
        mysql::id_ushort >
      tsId_type_;

      static const tsId_type_ tsId;

      // serviceId
      //
      typedef
      mysql::query_column<
        mysql::value_traits<
          ::ServiceId,
          mysql::id_ushort >::query_type,
        mysql::id_ushort >
      serviceId_type_;

      static const serviceId_type_ serviceId;
    };

    typedef
    odb::query_pointer<
      odb::pointer_query_columns<
        ::ReferenceService,
        id_mysql,
        refs_alias_ > >
    refs_pointer_type_;

    struct refs_type_: refs_pointer_type_, refs_column_class_
    {
      refs_type_ ()
      {
      }
    };

    static const refs_type_ refs;
  };

  template <typename A>
  const typename query_columns< ::ReferenceServiceEvent, id_mysql, A >::idx_type_
  query_columns< ::ReferenceServiceEvent, id_mysql, A >::
  idx (A::table_name, "`Idx`", 0);

  template <typename A>
  const typename query_columns< ::ReferenceServiceEvent, id_mysql, A >::eventId_type_
  query_columns< ::ReferenceServiceEvent, id_mysql, A >::
  eventId (A::table_name, "`EventId`", 0);

  template <typename A>
  const typename query_columns< ::ReferenceServiceEvent, id_mysql, A >::startTimePoint_type_
  query_columns< ::ReferenceServiceEvent, id_mysql, A >::
  startTimePoint (A::table_name, "`StartTimePoint`", 0);

  template <typename A>
  const typename query_columns< ::ReferenceServiceEvent, id_mysql, A >::duration_type_
  query_columns< ::ReferenceServiceEvent, id_mysql, A >::
  duration (A::table_name, "`Duration`", 0);

  template <typename A>
  const typename query_columns< ::ReferenceServiceEvent, id_mysql, A >::refs_column_class_::tsId_type_
  query_columns< ::ReferenceServiceEvent, id_mysql, A >::refs_column_class_::
  tsId (A::table_name, "`Refs_TsId`", 0);

  template <typename A>
  const typename query_columns< ::ReferenceServiceEvent, id_mysql, A >::refs_column_class_::serviceId_type_
  query_columns< ::ReferenceServiceEvent, id_mysql, A >::refs_column_class_::
  serviceId (A::table_name, "`Refs_SvcId`", 0);

  template <typename A>
  const typename query_columns< ::ReferenceServiceEvent, id_mysql, A >::refs_type_
  query_columns< ::ReferenceServiceEvent, id_mysql, A >::refs;

  // Movie
  //
}

#include "ReferenceService-odb.ixx"

#include <odb/post.hxx>

#endif // REFERENCE_SERVICE_ODB_H
