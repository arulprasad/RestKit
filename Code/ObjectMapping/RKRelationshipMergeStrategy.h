//
//  RKRelationshipMergeStrategy.h
//  RestKit
//
//  Created by Alex Ledovskiy on 11/15/12.
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

/***
 * RKRelationshipMergeStrategyDefault is set by default
 * Stratagy by default is RKRelationshipMergeStrategyReplace
 * RKRelationshipMergeStrategyUnion adds new relationship objects
 * to the old ones. Old objects are saved.
 * RKRelationshipMergeStrategyReplace replaces old objects with
 * the new ones. Old objects are saved, but relationships are removed
 **/

extern NSString * const RKRelationshipMergeStrategyDefault;
extern NSString * const RKRelationshipMergeStrategyUnion;
extern NSString * const RKRelationshipMergeStrategyReplace;