#ifndef GOOGLE_PROTOBUF_COMPILER_NIM_GENERATOR_H__
#define GOOGLE_PROTOBUF_COMPILER_NIM_GENERATOR_H__

#include <google/protobuf/compiler/code_generator.h>

#include <string>

namespace google {
namespace protobuf {
namespace compiler {
namespace nim {

class LIBPROTOC_EXPORT Generator
    : public google::protobuf::compiler::CodeGenerator {
  virtual bool Generate(
      const FileDescriptor* file,
      const string& parameter,
      GeneratorContext* generator_context,
      string* error) const;
};

}  // namespace nim
}  // namespace compiler
}  // namespace protobuf
}  // namespace google

#endif  // GOOGLE_PROTOBUF_COMPILER_NIM_GENERATOR_H__
