//
//  NBCImagrWorkflowNBI.h
//  NBICreator
//
//  Created by Erik Berglund on 2015-05-02.
//  Copyright (c) 2015 NBICreator. All rights reserved.
//

#import <Foundation/Foundation.h>
@class NBCWorkflowItem;
//#import "NBCWorkflowProgressViewController.h"

@protocol NBCImagrWorkflowNBIDelegate
- (void)updateProgressStatus:(NSString *)statusMessage workflow:(id)workflow;
- (void)updateProgressBar:(double)value;
@end

@interface NBCImagrWorkflowNBI : NSObject

@property id delegate;

// ------------------------------------------------------
//  Class Instance Properties
// ------------------------------------------------------
//@property NBCWorkflowProgressViewController *progressView;

// ------------------------------------------------------
//  Properties
// ------------------------------------------------------
@property NSString *nbiVolumeName;
@property NSURL *temporaryNBIURL;
@property NSString *temporaryNBIBaseSystemPath;
@property double temporaryNBIBaseSystemSize;
@property NSString *diskVolumePath;
@property double netInstallVolumeSize;
@property BOOL copyComplete;

// ------------------------------------------------------
//  Instance Methods
// ------------------------------------------------------
- (void)runWorkflow:(NBCWorkflowItem *)workflowItem;

@end