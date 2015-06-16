'use strict';

module.exports = function (grunt) {

  grunt.initConfig({
    watch: {
      options: {
        livereload: true
      },
      sass: {
        files: ['sass/{,**/}*.{scss,sass}'],
        tasks: ['compass:dev'],
        options: {
          livereload: false
        }
      },
      registry: {
        files: ['*.info', '{,**}/*.{php,inc}'],
        tasks: ['shell'],
        options: {
          livereload: false
        }
      },
      images: {
        files: ['images/**']
      },
      css: {
        files: ['css/{,**/}*.css']
      },
      js: {
        files: ['js/{,**/}*.js', '!js/{,**/}*.min.js'],
        tasks: ['jshint', 'uglify:dev']
      }
    },

    shell: {
      all: {
        command: 'drush cache-clear theme-registry'
      }
    },

    compass: {
      options: {
        config: 'config.rb',
        bundleExec: true,
        //force: false
      },
      dev: {
        options: {
          environment: 'development',
          sourcemap: true,
          force: false
        }
      },
      dist: {
        options: {
          environment: 'production',
          sourcemap: true,
          force: true
        }
      }
    },

    jshint: {
      options: {
        jshintrc: '.jshintrc'
      },
      all: ['js/{,**/}*.js', '!js/{,**/}*.min.js']
    },

    uglify: {
      dev: {
        options: {
          mangle: false,
          compress: false,
          beautify: true
        },
        files: [{
          expand: true,
          flatten: true,
          cwd: 'js',
          dest: 'js',
          src: ['**/*.js', '!**/*.min.js'],
          rename: function(dest, src) {
            var folder = src.substring(0, src.lastIndexOf('/'));
            var filename = src.substring(src.lastIndexOf('/'), src.length);
            filename = filename.substring(0, filename.lastIndexOf('.'));
            return dest + '/' + folder + filename + '.min.js';
          }
        }]
      },
      dist: {
        options: {
          mangle: true,
          compress: true
        },
        files: [{
          expand: false,
          flatten: true,
          cwd: 'js',
          dest: 'js',
          src: ['**/*.js', '!**/*.min.js'],
          rename: function(dest, src) {
            var folder = src.substring(0, src.lastIndexOf('/'));
            var filename = src.substring(src.lastIndexOf('/'), src.length);
            filename = filename.substring(0, filename.lastIndexOf('.'));
            return dest + '/' + folder + filename + '.min.js';
          }
        }]
      }
    },
    criticalcss: {
      custom_options: {
        options: {
          url: 'http://guest.digitaltreasures.ca',
          outputfile: 'css/critical.css',
          filename: 'css/digital-treasures.styles.css',
          width: 1200,
          height: 500
        }
      }
    },

    uncss: {

      dist: {

        files: {

          'css/digital-treasures.styles.tidy.css': [

            'http://guest.digitaltreasures.ca/',
            'http://guest.digitaltreasures.ca/need-know',
            'http://guest.digitaltreasures.ca/custom-editing-solutions',
            'http://guest.digitaltreasures.ca/testimonials',
            'http://guest.digitaltreasures.ca/about-us',
            'http://guest.digitaltreasures.ca/blog',
            'http://guest.digitaltreasures.ca/contact-us',
            'http://guest.digitaltreasures.ca/video-digital-service-toronto-gta',
            'http://guest.digitaltreasures.ca/film-digital-service-toronto-gta',
            'http://guest.digitaltreasures.ca/photos-album-scanning',
            'http://guest.digitaltreasures.ca/slide-scanning-service-toronto-gta',
            'http://guest.digitaltreasures.ca/need-know',
            'http://guest.digitaltreasures.ca/8mm-dvd-conversion-services-toronto-gta',
            'http://guest.digitaltreasures.ca/16mm-dvd-conversion-service-toronto-gta',
            'http://guest.digitaltreasures.ca/adat-digital-conversion-service-toronto-gta',
            'http://guest.digitaltreasures.ca/audio-digital',
            'http://guest.digitaltreasures.ca/betacamsp-conversion-service-toronto-gta',
            'http://guest.digitaltreasures.ca/betacamsx-dvd-conversion-services-toronto-gta',
            'http://guest.digitaltreasures.ca/betamax-dvd-conversion-services-toronto-gta',
            'http://guest.digitaltreasures.ca/compact-cassette-digital-conversion-service-toronto-gta',
            'http://guest.digitaltreasures.ca/dat-digital-conversion-service-toronto-gta',
            'http://guest.digitaltreasures.ca/digital8-dvd-conversion-services-toronto-gta',
            'http://guest.digitaltreasures.ca/digital-betacam-conversion-service-toronto',
            'http://guest.digitaltreasures.ca/dtrs-digital-conversion-service-toronto-gta',
            'http://guest.digitaltreasures.ca/dv-dvd-conversion-services-toronto-gta',
            'http://guest.digitaltreasures.ca/dvcam-conversion-company-toronto-gta',
            'http://guest.digitaltreasures.ca/dvcpro-dvd-conversion-services-toronto-gta',
            'http://guest.digitaltreasures.ca/hi8-dvd-conversion-services-toronto-gta',
            'http://guest.digitaltreasures.ca/hdv-dvd-conversion-services-toronto-gta'
          ]
        }
      }
    }
  });

  grunt.loadNpmTasks('grunt-contrib-watch');
  grunt.loadNpmTasks('grunt-contrib-compass');
  grunt.loadNpmTasks('grunt-contrib-jshint');
  grunt.loadNpmTasks('grunt-contrib-uglify');
  grunt.loadNpmTasks('grunt-shell');
  grunt.loadNpmTasks('grunt-criticalcss');
  grunt.loadNpmTasks('grunt-uncss');

  grunt.registerTask('build', [
    'uglify:dist',
    'compass:dist',
    'jshint'
  ]);

};
