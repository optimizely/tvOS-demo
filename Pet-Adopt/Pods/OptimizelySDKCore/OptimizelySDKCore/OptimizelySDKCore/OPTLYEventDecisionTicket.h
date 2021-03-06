/****************************************************************************
 * Copyright 2016, Optimizely, Inc. and contributors                        *
 *                                                                          *
 * Licensed under the Apache License, Version 2.0 (the "License");          *
 * you may not use this file except in compliance with the License.         *
 * You may obtain a copy of the License at                                  *
 *                                                                          *
 *    http://www.apache.org/licenses/LICENSE-2.0                            *
 *                                                                          *
 * Unless required by applicable law or agreed to in writing, software      *
 * distributed under the License is distributed on an "AS IS" BASIS,        *
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. *
 * See the License for the specific language governing permissions and      *
 * limitations under the License.                                           *
 ***************************************************************************/

// Model object containing the visitor-specific input to the client decision engine.

#import <Foundation/Foundation.h>
#import <JSONModel/JSONModelLib.h>

@protocol OPTLYEventAudience;

@protocol OPTLYEventDecisionTicket
@end

@interface OPTLYEventDecisionTicket : JSONModel

// The audiences bucketed at decision time
@property (nonatomic, strong, nullable) NSArray<OPTLYEventAudience, Optional> *audiences;
// Id (UUID or visitorId) used for bucketing
@property (nonatomic, strong, nullable) NSString<Optional> *bucketingId;

@end
