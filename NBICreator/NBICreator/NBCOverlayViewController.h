//
//  NBCOverlayViewController.h
//  NBICreator
//
//  Created by Erik Berglund on 2015-09-22.
//  Copyright © 2015 NBICreator. All rights reserved.
//

#import <Cocoa/Cocoa.h>

enum {
    kContentTypePackages = 0,
    kContentTypeCertificates,
    kContentTypeConfigurationProfiles
};

@class NBCOverlayView;

@interface NBCOverlayViewController : NSViewController
@property (strong) NBCOverlayView *viewOverlayView;
@property int contentType;


- (id)initWithContentType:(int)contentType;

@end

@interface NBCOverlayView : NSView

@property (weak) IBOutlet NSImageView *imageView;
@property (weak) IBOutlet NSTextField *textField;

@end
