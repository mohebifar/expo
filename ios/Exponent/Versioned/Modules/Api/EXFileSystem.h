// Copyright 2016-present 650 Industries. All rights reserved.

#import "EXScopedEventEmitter.h"
#import "EXScopedModuleRegistry.h"

@interface EXFileSystem : EXScopedEventEmitter

@property (nonatomic, readonly) NSString *documentDirectory;
@property (nonatomic, readonly) NSString *cachesDirectory;

+ (BOOL)ensureDirExistsWithPath:(NSString *)path;
+ (NSString *)documentDirectoryForExperienceId:(NSString *)experienceId;
+ (NSString *)cachesDirectoryForExperienceId:(NSString *)experienceId;

@end

EX_DECLARE_SCOPED_MODULE_GETTER(EXFileSystem, fileSystem)
