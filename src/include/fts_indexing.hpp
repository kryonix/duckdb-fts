//===----------------------------------------------------------------------===//
//                         DuckDB
//
// fts_indexing.hpp
//
//
//===----------------------------------------------------------------------===//

#pragma once

#include "duckdb/main/client_context.hpp"

namespace duckdb {

struct FTSIndexing {
  static string DropFTSIndexQuery(ClientContext &context,
                                  const FunctionParameters &parameters);
  static string CreateFTSIndexQuery(ClientContext &context,
                                    const FunctionParameters &parameters);
  static string CreateFTSIndexChunkedInitQuery(
      ClientContext &context, const FunctionParameters &parameters);
  static string CreateFTSIndexChunkedAppendQuery(
      ClientContext &context, const FunctionParameters &parameters);
  static string CreateFTSIndexChunkedClusterBeginQuery(
      ClientContext &context, const FunctionParameters &parameters);
  static string CreateFTSIndexChunkedClusterAppendQuery(
      ClientContext &context, const FunctionParameters &parameters);
  static string CreateFTSIndexChunkedFinalizeQuery(
      ClientContext &context, const FunctionParameters &parameters);
  static void CreateFTSIndexChunked(ClientContext &context,
                                    const FunctionParameters &parameters);
};

} // namespace duckdb
