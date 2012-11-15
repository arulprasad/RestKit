//
//  RKObjectRelationshipMapping.h
//  RestKit
//
//  Created by Blake Watters on 5/4/11.
//  Copyright (c) 2009-2012 RestKit. All rights reserved.
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//  http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.
//

#import <Foundation/Foundation.h>
#import "RKObjectAttributeMapping.h"
#import "RKObjectMappingDefinition.h"

@class RKObjectmapping;

/***
 * RKRelationshipMergeStrategyDefault is set by default
 * Stratagy by default is RKRelationshipMergeStrategyReplace
 * RKRelationshipMergeStrategyUnion adds new relationship objects
 * to the old ones. Old objects are saved.
 * RKRelationshipMergeStrategyReplace replaces old objects with
 * the new ones. Old objects are saved, but relationships are removed
 **/
typedef enum{
    RKRelationshipMergeStrategyDefault,
    RKRelationshipMergeStrategyUnion,
    RKRelationshipMergeStrategyReplace
} RKRelationshipMergeStrategy;

@interface RKObjectRelationshipMapping : RKObjectAttributeMapping

@property (nonatomic, retain) RKObjectMappingDefinition *mapping;
@property (nonatomic, assign) BOOL reversible;
@property (nonatomic) RKRelationshipMergeStrategy mergeStrategy;

+ (RKObjectRelationshipMapping *)mappingFromKeyPath:(NSString *)sourceKeyPath toKeyPath:(NSString *)destinationKeyPath withMapping:(RKObjectMappingDefinition *)objectOrDynamicMapping reversible:(BOOL)reversible mergeStrategy:(RKRelationshipMergeStrategy)strategy;

+ (RKObjectRelationshipMapping *)mappingFromKeyPath:(NSString *)sourceKeyPath toKeyPath:(NSString *)destinationKeyPath withMapping:(RKObjectMappingDefinition *)objectOrDynamicMapping;

+ (RKObjectRelationshipMapping *)mappingFromKeyPath:(NSString *)sourceKeyPath toKeyPath:(NSString *)destinationKeyPath withMapping:(RKObjectMappingDefinition *)objectOrDynamicMapping reversible:(BOOL)reversible;

@end
